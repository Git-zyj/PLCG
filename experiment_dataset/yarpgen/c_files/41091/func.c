/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41091
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41091 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41091
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
    var_12 = -965073304;
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */_Bool) var_7);
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 2; i_3 < 21; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 25; i_4 += 1) 
                        {
                            {
                                var_14 *= ((/* implicit */int) (!(((/* implicit */_Bool) ((((unsigned int) (unsigned char)255)) - (((/* implicit */unsigned int) ((((/* implicit */_Bool) 965073322)) ? (((/* implicit */int) (unsigned char)231)) : (((/* implicit */int) (signed char)-64))))))))));
                                arr_15 [i_1] [i_0] = ((((/* implicit */int) (short)(-32767 - 1))) + (((/* implicit */int) (_Bool)1)));
                            }
                        } 
                    } 
                    arr_16 [i_0] [i_2] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65524)) ? (((((/* implicit */_Bool) (unsigned char)107)) ? (((/* implicit */int) (unsigned char)14)) : (((/* implicit */int) (unsigned short)26072)))) : (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_6))))))) ? ((+(((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)106)))))) : (min((((/* implicit */int) (signed char)-48)), (1036095831))));
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (int i_6 = 0; i_6 < 25; i_6 += 1) 
                        {
                            {
                                var_15 = (_Bool)1;
                                arr_23 [i_0] [i_1] [i_2] [(signed char)22] [i_6] [(signed char)22] [i_1] = ((/* implicit */_Bool) max((((/* implicit */unsigned int) var_10)), (max((((unsigned int) -714022483523571138LL)), (((/* implicit */unsigned int) max(((_Bool)1), ((_Bool)1))))))));
                                arr_24 [i_0] [i_0] [i_6] [i_5] [i_5] [3] [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) -840210137)) : (((unsigned int) -840210122))))) ? (((((/* implicit */_Bool) ((unsigned long long int) -965073312))) ? (((/* implicit */int) (unsigned short)4095)) : (((/* implicit */int) ((_Bool) var_7))))) : (((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)21)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (-7104594558751495085LL))) >= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)0)) || (((/* implicit */_Bool) (unsigned char)242)))))))))));
                                var_16 |= ((/* implicit */signed char) var_11);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned int) min((var_17), (((((/* implicit */_Bool) var_10)) ? (1535835475U) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))));
}
