/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214411
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214411 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214411
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        var_14 ^= ((/* implicit */short) (-(259214702U)));
        var_15 ^= ((/* implicit */unsigned int) var_1);
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                for (int i_3 = 0; i_3 < 21; i_3 += 4) 
                {
                    {
                        var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) var_7))));
                        var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) (unsigned short)50747)) ? (arr_1 [(signed char)5]) : (((/* implicit */unsigned long long int) var_13)))) : (((((/* implicit */_Bool) -2963243793169213816LL)) ? (var_6) : (((/* implicit */unsigned long long int) var_13))))));
                        var_18 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(1347917323059948940ULL)))) ? (arr_10 [i_0] [(signed char)2] [i_2] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) var_7)))));
                        var_19 ^= ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) ^ (arr_6 [i_0] [i_1] [i_2] [i_3])));
                    }
                } 
            } 
        } 
        var_20 ^= ((/* implicit */int) var_2);
        arr_11 [14LL] = ((/* implicit */int) (-(((((/* implicit */_Bool) (unsigned char)150)) ? (((/* implicit */long long int) var_12)) : (arr_8 [16U] [i_0])))));
    }
    /* LoopNest 2 */
    for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 4) 
    {
        for (short i_5 = 0; i_5 < 20; i_5 += 2) 
        {
            {
                var_21 = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_4])) ? (((/* implicit */int) (unsigned short)14764)) : (((/* implicit */int) arr_3 [i_5] [i_4]))))) / (((((/* implicit */_Bool) (~(var_13)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : ((~(arr_2 [i_4] [i_5]))))));
                arr_17 [i_4] = ((/* implicit */unsigned int) var_13);
            }
        } 
    } 
    var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)14771)) ? (((/* implicit */int) (unsigned short)50772)) : (((/* implicit */int) ((var_0) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))))))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_6 = 0; i_6 < 20; i_6 += 1) 
    {
        var_23 = ((/* implicit */short) (((_Bool)1) ? (((/* implicit */int) ((arr_2 [i_6] [i_6]) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_6])))))) : (((/* implicit */int) (!(var_2))))));
        var_24 = ((/* implicit */short) arr_5 [i_6] [(signed char)4] [(signed char)4] [i_6]);
    }
}
