/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19759
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19759 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19759
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
    for (long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 19; i_2 += 2) 
                {
                    for (signed char i_3 = 2; i_3 < 17; i_3 += 2) 
                    {
                        {
                            var_10 |= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 624531132)) ? (((((/* implicit */int) (signed char)102)) << (((-624531132) + (624531132))))) : (((((/* implicit */int) (short)-9158)) | (((/* implicit */int) (signed char)94))))))) ? (((arr_6 [i_3 - 1] [i_3] [i_3 + 2] [i_3]) | (arr_6 [i_3 + 2] [i_3] [i_3 - 1] [i_3]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_3] [(signed char)8])) || (((/* implicit */_Bool) var_4))))) <= ((+(((/* implicit */int) (_Bool)1))))))))));
                            arr_9 [(unsigned short)13] [(unsigned short)13] [i_1] [(unsigned short)13] [i_3 + 2] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_5 [i_3 + 2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_3 - 2]))) : (arr_7 [i_3 - 2] [i_2]))) * (((/* implicit */long long int) arr_8 [i_3 + 2] [i_3 + 2]))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_4 = 2; i_4 < 17; i_4 += 2) 
                {
                    for (long long int i_5 = 2; i_5 < 15; i_5 += 4) 
                    {
                        {
                            arr_18 [i_0] [i_0] [10ULL] |= ((/* implicit */unsigned short) 2626630335U);
                            var_11 = ((((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */int) var_4)) != (var_2))))))) ? (((/* implicit */long long int) var_2)) : (((((((/* implicit */_Bool) arr_8 [i_0] [i_5])) ? (((/* implicit */long long int) arr_8 [(unsigned short)15] [(unsigned short)15])) : (arr_7 [i_0] [i_1]))) * (((/* implicit */long long int) 1668336976U)))));
                            var_12 = ((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-9142)) || (((/* implicit */_Bool) (short)861)))))));
                        }
                    } 
                } 
                var_13 = ((/* implicit */unsigned short) min(((-(2039704857U))), (max((((/* implicit */unsigned int) var_5)), (2761384756U)))));
                var_14 = ((/* implicit */long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (((/* implicit */int) (!(((/* implicit */_Bool) -2147483636))))) : (((/* implicit */int) (!((_Bool)1))))))), (min((min((4294967288U), (((/* implicit */unsigned int) arr_13 [i_1])))), (((/* implicit */unsigned int) arr_17 [i_0] [i_1] [i_1] [i_0]))))));
                arr_19 [i_1] = ((/* implicit */unsigned int) ((unsigned char) arr_14 [i_0] [i_0]));
            }
        } 
    } 
    var_15 = ((/* implicit */int) var_7);
    var_16 = ((/* implicit */unsigned char) min((var_0), (((/* implicit */unsigned int) (-((-(((/* implicit */int) var_8)))))))));
    var_17 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_5))) != ((-(((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) var_0)) : (var_1)))))));
}
