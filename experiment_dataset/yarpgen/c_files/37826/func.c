/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37826
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37826 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37826
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
    var_13 &= ((/* implicit */unsigned short) 8796092989440ULL);
    /* LoopSeq 4 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 4) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */long long int) ((unsigned long long int) ((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned short)4)))) % (((/* implicit */int) (unsigned short)65532)))));
        var_14 = ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)124)) | (((/* implicit */int) (unsigned short)10))))) && (((/* implicit */_Bool) arr_0 [i_0])));
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 21; i_1 += 4) /* same iter space */
    {
        var_15 = ((/* implicit */unsigned short) (-(var_6)));
        var_16 = ((/* implicit */signed char) arr_4 [i_1] [i_1]);
        /* LoopSeq 1 */
        for (short i_2 = 3; i_2 < 19; i_2 += 4) 
        {
            var_17 = ((/* implicit */unsigned long long int) max((var_17), (((arr_5 [i_2 - 3] [i_2 - 3]) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_0 [i_1]))))))));
            var_18 += ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_3)) / (var_5)));
        }
    }
    for (short i_3 = 0; i_3 < 24; i_3 += 4) 
    {
        var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */int) arr_7 [i_3])) << (((5995816466451213170ULL) - (5995816466451213148ULL)))))))));
        var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) arr_7 [i_3]))));
    }
    for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 4) 
    {
        /* LoopSeq 1 */
        for (long long int i_5 = 0; i_5 < 20; i_5 += 1) 
        {
            var_21 = ((/* implicit */unsigned short) ((((arr_5 [i_4] [i_5]) + (var_8))) | (arr_5 [i_4] [i_4])));
            arr_15 [i_4] [12] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)146))))) | (580577732237975557LL))))));
            arr_16 [i_4] [i_5] = ((/* implicit */unsigned int) arr_5 [i_4] [9ULL]);
            var_22 = ((/* implicit */int) ((short) (signed char)-32));
        }
        var_23 = ((/* implicit */unsigned long long int) (((-(((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [(signed char)2]))))))) <= (((/* implicit */int) arr_1 [i_4]))));
    }
    /* LoopNest 2 */
    for (signed char i_6 = 3; i_6 < 20; i_6 += 1) 
    {
        for (short i_7 = 0; i_7 < 21; i_7 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_8 = 2; i_8 < 18; i_8 += 4) 
                {
                    for (unsigned int i_9 = 0; i_9 < 21; i_9 += 1) 
                    {
                        {
                            var_24 = ((/* implicit */unsigned long long int) var_11);
                            var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) (-(((/* implicit */int) arr_21 [i_8] [i_8])))))) ? (((/* implicit */int) var_2)) : ((-(((/* implicit */int) arr_25 [i_6 - 2] [i_6 - 2] [i_6] [i_6] [i_6 - 1] [i_6 - 3])))))))));
                            var_26 = (signed char)14;
                        }
                    } 
                } 
                var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_12)))))));
            }
        } 
    } 
}
