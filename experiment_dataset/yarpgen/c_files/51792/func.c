/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51792
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 18; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_1] [(_Bool)1] = ((/* implicit */unsigned char) max((arr_4 [i_0]), (((/* implicit */short) ((signed char) (+(((/* implicit */int) (unsigned char)239))))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 1) 
                {
                    arr_8 [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) 520093696);
                    /* LoopSeq 1 */
                    for (long long int i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        var_19 = ((/* implicit */long long int) arr_2 [i_1] [i_1]);
                        var_20 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_7 [(unsigned char)0])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_4 [i_2]))))));
                        arr_11 [i_0] [i_0] [i_2] [i_3] = ((/* implicit */signed char) ((_Bool) ((((/* implicit */int) var_0)) * (((/* implicit */int) arr_0 [i_0])))));
                        arr_12 [i_1] = ((/* implicit */long long int) arr_4 [i_3]);
                    }
                    var_21 *= ((/* implicit */unsigned short) ((unsigned char) arr_2 [i_1 + 2] [i_1 - 1]));
                }
                arr_13 [i_0] = ((/* implicit */unsigned char) ((unsigned int) (+(((((/* implicit */_Bool) 520093696)) ? (((/* implicit */int) arr_6 [i_0] [i_1] [i_0])) : (((/* implicit */int) arr_3 [i_1] [i_0] [i_0])))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        for (unsigned short i_5 = 0; i_5 < 19; i_5 += 1) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_6 = 0; i_6 < 19; i_6 += 2) 
                {
                    for (unsigned char i_7 = 0; i_7 < 19; i_7 += 4) 
                    {
                        {
                            var_22 = ((/* implicit */signed char) ((unsigned short) (unsigned char)228));
                            /* LoopSeq 4 */
                            for (unsigned long long int i_8 = 1; i_8 < 18; i_8 += 4) 
                            {
                                var_23 = ((/* implicit */unsigned char) var_18);
                                arr_27 [i_4] [i_5] [i_6] [i_5] [i_8] = ((/* implicit */short) (~(((/* implicit */int) ((((((/* implicit */int) arr_25 [i_4] [i_4] [i_4] [(_Bool)1])) << (((/* implicit */int) var_12)))) != (((/* implicit */int) arr_0 [i_4])))))));
                                arr_28 [i_5] = ((/* implicit */unsigned short) max(((_Bool)1), (((((/* implicit */unsigned long long int) max((var_11), (((/* implicit */int) var_1))))) > (((unsigned long long int) arr_7 [i_4]))))));
                            }
                            /* vectorizable */
                            for (signed char i_9 = 0; i_9 < 19; i_9 += 4) 
                            {
                                var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)128)) ? (((((/* implicit */int) (unsigned short)61440)) << (((((/* implicit */int) arr_15 [i_4])) - (157))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_4])))))));
                                var_25 = ((/* implicit */int) min((var_25), (arr_7 [i_7])));
                                var_26 = ((((/* implicit */int) ((unsigned char) arr_21 [i_4] [i_5] [i_6] [i_4]))) << (((((((-2129650575) + (((/* implicit */int) var_12)))) + (2129650603))) - (23))));
                            }
                            for (unsigned char i_10 = 2; i_10 < 15; i_10 += 4) 
                            {
                                arr_35 [i_5] [i_5] [i_5] [11] [i_7] [i_5] = ((/* implicit */unsigned int) max((((/* implicit */int) arr_23 [i_6] [i_6] [i_6] [i_5] [i_4])), (var_10)));
                                var_27 ^= ((/* implicit */signed char) var_12);
                            }
                            for (unsigned char i_11 = 0; i_11 < 19; i_11 += 4) 
                            {
                                arr_38 [i_5] [i_5] = ((/* implicit */int) (unsigned short)0);
                                arr_39 [i_5] [(short)18] [i_5] [i_6] [i_7] [15] [i_11] = ((/* implicit */int) ((short) (((!(var_12))) ? (((/* implicit */int) var_5)) : ((~(((/* implicit */int) var_0)))))));
                            }
                        }
                    } 
                } 
                arr_40 [i_5] = (-(((((/* implicit */_Bool) arr_21 [i_4] [i_4] [i_5] [i_5])) ? (((/* implicit */int) arr_21 [i_5] [i_4] [i_4] [i_4])) : (var_11))));
            }
        } 
    } 
    var_28 = ((/* implicit */unsigned char) min(((~((~(((/* implicit */int) (_Bool)1)))))), (var_15)));
}
