/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52881
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52881 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52881
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
    for (int i_0 = 1; i_0 < 11; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_7 [i_0] = ((/* implicit */unsigned char) max((max((((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_2))), (((/* implicit */unsigned long long int) min(((unsigned short)53413), (((/* implicit */unsigned short) (unsigned char)17))))))), (((/* implicit */unsigned long long int) ((long long int) max((((/* implicit */unsigned char) var_9)), ((unsigned char)239)))))));
                var_14 = ((/* implicit */short) ((unsigned long long int) (-(((/* implicit */int) (_Bool)1)))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_5)))))));
                    var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (arr_6 [i_0 + 2]) : (arr_6 [i_0 - 1]))))));
                }
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    var_17 = ((/* implicit */unsigned char) ((unsigned long long int) 1044480LL));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 14; i_4 += 4) 
                    {
                        for (unsigned short i_5 = 0; i_5 < 14; i_5 += 2) 
                        {
                            {
                                arr_17 [i_0] = ((/* implicit */_Bool) arr_5 [(short)1] [0LL]);
                                var_18 = ((/* implicit */int) max((((((/* implicit */_Bool) max((((/* implicit */long long int) 127)), (arr_2 [i_0])))) || (((/* implicit */_Bool) ((arr_1 [i_0] [i_0]) ? (((/* implicit */int) (unsigned char)113)) : (((/* implicit */int) (signed char)0))))))), (arr_12 [(unsigned short)13] [i_1] [(unsigned short)13] [(unsigned short)13] [(unsigned char)8])));
                                var_19 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) == (max(((~(arr_14 [i_0]))), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) != (var_0))))))));
                            }
                        } 
                    } 
                    arr_18 [i_0] [i_0] [i_3] = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((signed char) arr_9 [i_3] [i_3] [i_3] [i_3]))), (max((((883238013481107733LL) / (((/* implicit */long long int) ((/* implicit */int) (signed char)64))))), (((/* implicit */long long int) max((((/* implicit */signed char) arr_1 [i_1] [i_3])), ((signed char)-67))))))));
                    var_20 = ((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4095LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)143))) : (7427043855717604841ULL)))) ? (((/* implicit */int) ((unsigned char) var_13))) : ((-(((/* implicit */int) var_8))))))) != (min((((/* implicit */long long int) var_13)), (((((/* implicit */_Bool) (unsigned short)23585)) ? (arr_2 [i_3]) : (-8567855515106914686LL))))));
                    var_21 = ((/* implicit */short) ((((/* implicit */int) var_6)) / (((((/* implicit */_Bool) arr_13 [i_0] [i_0 + 1] [i_1] [i_1] [i_3] [i_3])) ? ((((_Bool)1) ? (((/* implicit */int) (unsigned short)10667)) : (((/* implicit */int) var_6)))) : (((((/* implicit */_Bool) 1555172417U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_4))))))));
                }
                var_22 = ((/* implicit */unsigned int) min((var_22), (((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)12)) ? (((/* implicit */int) (signed char)88)) : (((/* implicit */int) var_3))))) ? (((/* implicit */long long int) ((int) arr_4 [i_0] [i_0] [i_0]))) : (arr_11 [i_0] [8ULL] [i_1]))))));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) ((short) var_13)))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_6 = 0; i_6 < 20; i_6 += 4) 
    {
        /* LoopNest 2 */
        for (long long int i_7 = 0; i_7 < 20; i_7 += 2) 
        {
            for (int i_8 = 0; i_8 < 20; i_8 += 2) 
            {
                {
                    var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) ((int) ((var_7) | (17975542067967370937ULL)))))));
                    var_25 ^= ((/* implicit */unsigned short) 2114554358);
                }
            } 
        } 
        var_26 -= var_8;
    }
    var_27 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((max((((/* implicit */long long int) var_1)), (454246023162342937LL))), (((/* implicit */long long int) var_6))))) ? (max((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_4)))), (((/* implicit */int) max((var_8), (((/* implicit */unsigned char) (signed char)0))))))) : (((/* implicit */int) (_Bool)1))));
    var_28 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((max((((/* implicit */unsigned long long int) (_Bool)1)), (var_7))), (((/* implicit */unsigned long long int) max((1099511627775LL), (((/* implicit */long long int) (_Bool)1)))))))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) min((var_9), (((/* implicit */signed char) var_6))))) : (((/* implicit */int) min((((/* implicit */unsigned short) var_4)), (var_12)))))) : (((int) var_9))));
}
