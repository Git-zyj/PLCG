/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216983
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216983 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216983
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
    var_17 = ((/* implicit */short) ((unsigned int) max((((((/* implicit */int) (unsigned char)148)) != (((/* implicit */int) (unsigned char)148)))), (((((/* implicit */int) (short)0)) <= (((/* implicit */int) (unsigned char)148)))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 22; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 23; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_2 = 1; i_2 < 23; i_2 += 4) 
                {
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 24; i_4 += 4) 
                        {
                            {
                                var_18 = ((/* implicit */signed char) min(((+(((/* implicit */int) arr_5 [i_0 + 1] [i_2 - 1] [i_3 + 1])))), (((/* implicit */int) (short)-10566))));
                                var_19 = ((/* implicit */short) ((((unsigned int) ((short) var_8))) * (((/* implicit */unsigned int) ((int) 1625944582516453664ULL)))));
                                var_20 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (short)-10566)), (1270612822U)));
                                arr_13 [i_2] [i_2] = ((unsigned long long int) ((((unsigned long long int) arr_6 [i_0 + 2] [i_0 + 2] [i_4])) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (signed char)-28))))));
                            }
                        } 
                    } 
                } 
                var_21 = ((/* implicit */short) ((((long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)103))) * (3576200466U)))) >> (((((((((/* implicit */int) (signed char)-3)) + (2147483647))) >> (((arr_11 [i_1 + 1] [i_1] [i_0 + 2] [i_1] [i_0]) - (503333367))))) - (2017)))));
                arr_14 [i_0] = var_15;
                arr_15 [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_1 - 1] [i_1] [i_0])) ? (3555309315540015024ULL) : (((/* implicit */unsigned long long int) (+(arr_11 [i_0] [i_0] [i_0 - 2] [i_0 + 1] [i_0 + 2])))))) + (((/* implicit */unsigned long long int) ((int) (-(0LL)))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_5 = 3; i_5 < 9; i_5 += 4) 
    {
        for (int i_6 = 0; i_6 < 13; i_6 += 3) 
        {
            {
                arr_22 [i_5] = ((/* implicit */long long int) ((short) max((arr_6 [i_5 - 3] [i_5 + 1] [i_5 - 3]), (arr_6 [i_5 + 1] [i_5] [i_5 + 1]))));
                var_22 = ((/* implicit */int) ((((((/* implicit */_Bool) ((signed char) 1223863529048556186LL))) ? (((/* implicit */unsigned int) arr_20 [i_5])) : (((unsigned int) arr_16 [i_6])))) >= (min((((unsigned int) 0U)), (((/* implicit */unsigned int) (short)12930))))));
                arr_23 [(unsigned short)8] &= ((/* implicit */short) 2681091345619847081ULL);
                arr_24 [i_5] [i_6] [i_5] = ((/* implicit */int) max(((-(min((((/* implicit */long long int) (short)15514)), (0LL))))), (((/* implicit */long long int) 3576200466U))));
                var_23 = ((/* implicit */signed char) (~(max((((unsigned long long int) 4208573282872638674LL)), (((/* implicit */unsigned long long int) ((_Bool) (signed char)103)))))));
            }
        } 
    } 
    var_24 = ((/* implicit */signed char) ((unsigned int) min((((/* implicit */unsigned long long int) ((long long int) (unsigned short)7787))), (((unsigned long long int) var_6)))));
}
