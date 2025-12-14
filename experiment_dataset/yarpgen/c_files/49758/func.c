/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49758
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49758 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49758
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
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                {
                    var_11 ^= ((/* implicit */signed char) (-(((/* implicit */int) (unsigned short)65535))));
                    var_12 = ((((/* implicit */_Bool) (~((~(arr_4 [i_0] [i_2] [i_1])))))) ? (((unsigned int) var_1)) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)65535)) == ((+(((/* implicit */int) var_9)))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        for (signed char i_4 = 0; i_4 < 17; i_4 += 1) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned int) min((var_13), (((((/* implicit */unsigned int) ((/* implicit */int) (!(var_7))))) % (((((/* implicit */_Bool) arr_14 [i_0] [i_3] [i_3] [i_3] [i_4])) ? (arr_3 [i_0] [i_1]) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_0])) * (((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))))))));
                                var_14 = ((((/* implicit */_Bool) arr_8 [i_2] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) min((arr_8 [i_2] [i_3]), (((/* implicit */signed char) (_Bool)1)))))) : (((unsigned int) var_4)));
                            }
                        } 
                    } 
                    arr_15 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */unsigned short) (-(((/* implicit */int) min((arr_5 [i_1] [i_2]), (min((((/* implicit */unsigned short) (unsigned char)5)), ((unsigned short)24576))))))));
                }
            } 
        } 
    } 
    var_15 ^= ((/* implicit */unsigned char) var_1);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_5 = 0; i_5 < 15; i_5 += 3) /* same iter space */
    {
        var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_16 [i_5])) ? (((/* implicit */int) arr_16 [i_5])) : (((/* implicit */int) arr_1 [i_5]))));
        var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_17 [i_5])))))));
    }
    /* vectorizable */
    for (unsigned char i_6 = 0; i_6 < 15; i_6 += 3) /* same iter space */
    {
        var_18 = arr_3 [i_6] [i_6];
        var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_12 [i_6] [(_Bool)1] [i_6] [i_6] [(_Bool)1] [i_6])) ? (((long long int) arr_5 [i_6] [i_6])) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (17U) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))))))));
        var_20 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_21 [i_6]))));
    }
    var_21 ^= ((/* implicit */_Bool) ((unsigned char) ((long long int) var_8)));
    var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) min((var_6), (((/* implicit */unsigned char) ((((/* implicit */int) var_6)) <= (((/* implicit */int) var_1)))))))))))));
}
