/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217020
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217020 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217020
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
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 24; i_2 += 2) 
                {
                    for (signed char i_3 = 2; i_3 < 24; i_3 += 2) 
                    {
                        {
                            arr_12 [i_0] [i_0] [24ULL] [i_3] [i_0] [i_0] = ((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */long long int) 636134593U)) != (var_11)))) & (((/* implicit */int) var_9))))), (var_0)));
                            arr_13 [i_1] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max(((short)32767), ((short)32767)))) ? (((/* implicit */int) ((((/* implicit */int) var_12)) < (((/* implicit */int) var_7))))) : (((/* implicit */int) (unsigned short)58173))))), ((-(max((((/* implicit */unsigned long long int) var_4)), (var_10)))))));
                        }
                    } 
                } 
                arr_14 [(unsigned char)9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */int) (short)-32766)) % (((/* implicit */int) (short)-32765)))) / (((/* implicit */int) (short)-32761))))) ? (max((((/* implicit */unsigned int) (short)-32756)), (130560U))) : (((/* implicit */unsigned int) min((((/* implicit */int) (unsigned short)0)), (770997916))))));
                var_13 += ((/* implicit */short) ((((/* implicit */int) (short)-32767)) ^ ((+(((/* implicit */int) (short)32766))))));
                /* LoopNest 3 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (unsigned int i_5 = 4; i_5 < 22; i_5 += 3) 
                    {
                        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)32766))));
                                var_15 = ((/* implicit */unsigned int) ((max((((/* implicit */int) var_7)), (-770997917))) / (((/* implicit */int) max(((short)-32766), ((short)32766))))));
                                var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) ((((((/* implicit */long long int) ((/* implicit */int) max((var_6), ((short)-31826))))) < (max((((/* implicit */long long int) var_9)), (var_11))))) && (((/* implicit */_Bool) var_2)))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_7 = 3; i_7 < 23; i_7 += 3) 
    {
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            {
                var_17 = ((/* implicit */long long int) max((var_17), (((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)32767)))))) ^ (max((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)249)) != (((/* implicit */int) (unsigned short)22624))))), (var_0)))))));
                arr_31 [i_7] [i_8] &= ((/* implicit */unsigned long long int) (+(((((/* implicit */unsigned int) ((/* implicit */int) var_7))) / (var_3)))));
                arr_32 [i_7] [i_7] = ((/* implicit */int) max((((/* implicit */unsigned long long int) var_2)), (min((max((((/* implicit */unsigned long long int) (short)-32758)), (var_5))), (((/* implicit */unsigned long long int) max((((/* implicit */short) (unsigned char)43)), ((short)32756))))))));
            }
        } 
    } 
    var_18 = ((/* implicit */long long int) (short)-32767);
}
