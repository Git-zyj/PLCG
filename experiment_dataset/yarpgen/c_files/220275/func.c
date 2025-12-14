/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220275
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220275 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220275
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
    for (int i_0 = 1; i_0 < 12; i_0 += 4) 
    {
        for (unsigned char i_1 = 4; i_1 < 12; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 13; i_2 += 2) 
                {
                    for (unsigned char i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 11; i_4 += 2) 
                        {
                            {
                                var_13 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) arr_2 [1] [i_3] [i_3]))) ? ((-(58606987))) : (min((-946077771), (((/* implicit */int) arr_13 [(short)1] [i_1] [i_2] [i_3] [0]))))))) ? (1318624269) : (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_2 [i_0] [(unsigned char)6] [(unsigned char)6])) : (((/* implicit */int) var_1)))))));
                                arr_15 [i_0] [i_1] [i_2] [i_4] [i_3] = ((/* implicit */short) (unsigned char)179);
                                var_14 = ((/* implicit */unsigned char) var_1);
                                var_15 = ((/* implicit */short) min((var_15), (((short) ((_Bool) (unsigned short)7349)))));
                            }
                        } 
                    } 
                } 
                var_16 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_5 [i_1] [i_1 - 4] [i_1])) ? (((/* implicit */int) arr_5 [(unsigned char)10] [i_1 - 2] [i_1])) : (((/* implicit */int) var_3))))));
                /* LoopNest 2 */
                for (unsigned int i_5 = 1; i_5 < 11; i_5 += 1) 
                {
                    for (short i_6 = 0; i_6 < 13; i_6 += 2) 
                    {
                        {
                            arr_20 [i_5] = ((/* implicit */unsigned short) 8537333674057541511ULL);
                            var_17 ^= ((/* implicit */unsigned long long int) ((int) ((short) (unsigned char)255)));
                            var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) (short)-16367))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) arr_9 [(unsigned char)7] [i_1 - 4] [i_5 - 1])) : (((/* implicit */int) (short)3849))))) : ((-(arr_1 [i_1 - 2])))));
                            var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) (short)21430))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned char)4)) : (((/* implicit */int) var_9))))) || (((/* implicit */_Bool) ((4676597864964255858ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255)))))))) ? (var_6) : (((((/* implicit */_Bool) var_12)) ? (2147483647) : (((var_8) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)176))))))));
    var_21 = ((/* implicit */unsigned long long int) var_9);
}
