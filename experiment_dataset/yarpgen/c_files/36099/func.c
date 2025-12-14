/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36099
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36099 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36099
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
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 19; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        {
                            arr_12 [i_3] [i_2] [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 9509171367226319313ULL)) ? (1099511627768ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)2)))));
                            var_19 *= ((/* implicit */unsigned char) var_14);
                            arr_13 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) max((((/* implicit */short) (unsigned char)8)), ((short)32762)))) : (((((/* implicit */_Bool) arr_8 [i_1] [i_2] [i_3])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_3]))))))) || (((/* implicit */_Bool) (unsigned char)22))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_4 = 1; i_4 < 15; i_4 += 1) 
                {
                    for (unsigned char i_5 = 0; i_5 < 19; i_5 += 2) 
                    {
                        {
                            arr_20 [i_4] = ((/* implicit */short) var_14);
                            arr_21 [i_4] [i_1] [i_5] [i_4] [i_1] [i_5] = ((/* implicit */_Bool) min((arr_7 [i_4 + 3] [i_4 + 4] [i_4 - 1] [i_4 - 1]), (((/* implicit */long long int) (+(-1792352475))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(max((-155553505), (((/* implicit */int) (unsigned char)4))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)61)) ? (var_6) : (var_8)))) : (15470509891284853783ULL)));
}
