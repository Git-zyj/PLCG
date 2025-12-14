/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210559
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210559 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210559
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
    var_15 = (-(var_6));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        var_16 &= ((/* implicit */unsigned char) arr_1 [i_0] [i_0]);
        var_17 = ((/* implicit */unsigned int) ((((((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) (unsigned char)130)) : (((/* implicit */int) arr_0 [i_0] [i_0])))) & (((((/* implicit */_Bool) (unsigned char)141)) ? (((/* implicit */int) (unsigned short)23945)) : (((/* implicit */int) arr_0 [i_0] [i_0])))))) ^ (((/* implicit */int) ((unsigned short) (!(var_4)))))));
    }
    for (unsigned short i_1 = 1; i_1 < 10; i_1 += 3) 
    {
        var_18 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) (~(min((((/* implicit */unsigned int) (unsigned char)108)), (var_11)))))) ? (((((/* implicit */_Bool) arr_1 [i_1 - 1] [i_1])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) arr_1 [(unsigned short)1] [19]))))))) : (((/* implicit */int) ((var_14) >= (((((/* implicit */_Bool) arr_2 [i_1] [i_1])) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) arr_1 [i_1] [13ULL])))))))));
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (signed char i_3 = 0; i_3 < 12; i_3 += 1) 
            {
                {
                    var_19 = ((/* implicit */short) (~(((/* implicit */int) (short)-1024))));
                    arr_8 [i_1] [i_2] [i_3] [i_3] &= ((/* implicit */long long int) (+(min((((/* implicit */int) arr_0 [i_2] [i_3])), (((((/* implicit */int) (unsigned char)8)) + (((/* implicit */int) (unsigned char)141))))))));
                    var_20 = ((/* implicit */signed char) var_0);
                    var_21 = (~(((/* implicit */int) ((((/* implicit */_Bool) min(((unsigned short)4569), (((/* implicit */unsigned short) (_Bool)1))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (short)1033)) : (((/* implicit */int) arr_0 [i_1] [i_3])))))))));
                }
            } 
        } 
    }
    for (int i_4 = 1; i_4 < 13; i_4 += 4) 
    {
        var_22 = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_1 [i_4] [i_4])), (arr_0 [i_4] [i_4]))))))) == (((/* implicit */int) (short)-1030))));
        arr_12 [i_4] [i_4] = ((/* implicit */_Bool) min((((/* implicit */int) min((arr_10 [i_4]), (((/* implicit */unsigned char) ((signed char) (_Bool)1)))))), (((((var_9) + (2147483647))) >> (((((int) arr_9 [i_4])) + (1643051202)))))));
        /* LoopNest 2 */
        for (unsigned long long int i_5 = 0; i_5 < 14; i_5 += 1) 
        {
            for (signed char i_6 = 0; i_6 < 14; i_6 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_7 = 0; i_7 < 14; i_7 += 1) 
                    {
                        for (int i_8 = 1; i_8 < 11; i_8 += 4) 
                        {
                            {
                                var_23 ^= ((/* implicit */_Bool) ((min(((-(((/* implicit */int) arr_15 [(_Bool)1])))), (((((/* implicit */_Bool) (unsigned short)65535)) ? (-1775147595) : (((/* implicit */int) (unsigned char)114)))))) / ((~(((/* implicit */int) (!(((/* implicit */_Bool) arr_21 [i_5] [11])))))))));
                                var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) (~(arr_9 [i_8]))))));
                            }
                        } 
                    } 
                    var_25 = ((((/* implicit */int) (!((_Bool)1)))) / (((/* implicit */int) arr_22 [i_6])));
                    var_26 = ((/* implicit */int) ((unsigned char) ((((/* implicit */int) ((unsigned short) arr_21 [i_4 + 1] [i_5]))) / (((/* implicit */int) (unsigned short)41601)))));
                    arr_25 [i_4] [i_4] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(arr_14 [i_4] [i_4])))) ? (((/* implicit */int) (unsigned char)114)) : (((/* implicit */int) ((((/* implicit */_Bool) 1863563528)) && (((/* implicit */_Bool) (unsigned char)94)))))));
                }
            } 
        } 
        var_27 ^= ((((/* implicit */_Bool) (-((+(arr_17 [13LL] [i_4] [i_4])))))) ? (((/* implicit */int) min((arr_11 [i_4] [i_4 - 1]), (arr_11 [i_4] [i_4 + 1])))) : (min((((/* implicit */int) ((unsigned char) arr_10 [7U]))), (min((((/* implicit */int) (unsigned short)65533)), (arr_16 [i_4] [i_4 - 1] [4]))))));
    }
    var_28 = ((/* implicit */short) var_9);
}
