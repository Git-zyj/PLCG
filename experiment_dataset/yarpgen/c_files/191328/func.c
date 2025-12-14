/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191328
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191328 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191328
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
    var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) ((var_7) + (((/* implicit */long long int) var_6)))))) ? ((((!(((/* implicit */_Bool) (signed char)9)))) ? (var_7) : (var_8))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)192)))))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 23; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 1; i_2 < 21; i_2 += 4) 
                {
                    for (unsigned int i_3 = 1; i_3 < 23; i_3 += 1) 
                    {
                        {
                            arr_11 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */signed char) (+(((long long int) arr_3 [i_0] [i_1 + 1] [i_3]))));
                            arr_12 [i_0] [i_1] [i_1 + 1] [i_2 + 1] [i_3 + 1] = ((/* implicit */signed char) (unsigned short)10);
                            arr_13 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) max((var_10), (((/* implicit */long long int) 4294967295U))))) / (((((/* implicit */_Bool) (unsigned short)19388)) ? (1073741823ULL) : (((/* implicit */unsigned long long int) 18014123631575040LL))))))) ? (min((min((var_7), (((/* implicit */long long int) arr_10 [i_0] [i_1] [i_2] [i_3 - 1] [i_2 + 1] [i_0])))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_10 [i_0] [i_0] [i_1 + 1] [i_2] [i_2] [i_0])) : (((/* implicit */int) (_Bool)1))))))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_5 [i_0] [i_3]))))));
                            arr_14 [4] |= ((/* implicit */long long int) ((unsigned int) (unsigned char)119));
                            arr_15 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((long long int) max((((((/* implicit */_Bool) (unsigned char)207)) ? (arr_5 [i_0] [i_2 + 3]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)191))))), (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)6)) * (((/* implicit */int) var_3))))))));
                        }
                    } 
                } 
                arr_16 [i_0] [i_0] = ((/* implicit */long long int) max((((((((/* implicit */int) var_1)) * (((/* implicit */int) (signed char)86)))) * (((/* implicit */int) var_1)))), (((/* implicit */int) (((-(var_9))) != (((/* implicit */long long int) min((1854902613U), (((/* implicit */unsigned int) var_2))))))))));
                arr_17 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)2)) ? (6917529027641081856LL) : (((/* implicit */long long int) 1391149230U))));
                arr_18 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) (short)-5599))))) <= (((/* implicit */int) var_11))));
                /* LoopNest 2 */
                for (unsigned int i_4 = 1; i_4 < 23; i_4 += 1) 
                {
                    for (long long int i_5 = 0; i_5 < 24; i_5 += 3) 
                    {
                        {
                            arr_26 [i_0] [i_1] [i_4 - 1] [4U] |= ((/* implicit */long long int) (((-(((/* implicit */int) (signed char)-3)))) >> (((((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)206)) * (((/* implicit */int) (signed char)-9))))) ? (((/* implicit */long long int) arr_8 [i_1 + 1] [i_1 - 1] [i_4 + 1] [i_4 + 1])) : (var_7))) - (3858793484LL)))));
                            var_13 = ((/* implicit */int) 2440064670U);
                        }
                    } 
                } 
            }
        } 
    } 
}
