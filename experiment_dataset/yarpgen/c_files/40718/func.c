/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40718
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
    for (unsigned char i_0 = 1; i_0 < 22; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_0]))))) ? (((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (short)256)))) : ((+(((/* implicit */int) (_Bool)1))))))));
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 21; i_2 += 4) 
                {
                    for (short i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        {
                            var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */int) (short)-28714)) + (2147483647))) >> (((((((/* implicit */_Bool) (signed char)64)) ? (((/* implicit */int) (signed char)35)) : (((/* implicit */int) (short)-24109)))) - (24)))))) ? (((((/* implicit */_Bool) arr_2 [i_3])) ? (arr_7 [i_3]) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) % (549755813888ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) max((((/* implicit */short) var_9)), ((short)12347))))))));
                            arr_12 [(short)7] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) arr_8 [i_3] [i_0] [i_0]);
                            arr_13 [5] [(short)10] [5] [i_0] [(_Bool)1] = ((/* implicit */_Bool) arr_11 [i_2] [i_2] [i_2] [i_2 - 4] [i_2] [i_2]);
                            var_20 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (short)-252)) / (arr_8 [9] [9] [9])))) ? (arr_7 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (_Bool)1))))))) ? (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (short)25580)) && (((/* implicit */_Bool) (short)-257)))))) : (((/* implicit */int) ((9221580870924349674ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_3] [i_3]))))))));
                        }
                    } 
                } 
                var_21 = (_Bool)1;
                var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((unsigned long long int) arr_0 [i_0 + 1] [i_1])) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) (unsigned char)66)) - (47))))))))) ? (((/* implicit */int) ((short) (unsigned char)224))) : ((+(((/* implicit */int) arr_10 [i_0]))))));
            }
        } 
    } 
    var_23 *= ((/* implicit */unsigned long long int) ((((((/* implicit */int) min((((/* implicit */short) (signed char)-58)), (((short) var_14))))) + (2147483647))) << (((((/* implicit */int) (short)1022)) - (1022)))));
    var_24 = ((/* implicit */unsigned char) ((((/* implicit */int) var_17)) >> (((var_0) - (826955812U)))));
    var_25 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) (~((-(var_0)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_0) : (((/* implicit */unsigned int) -1830818639))))) ? ((((_Bool)1) ? (134217726U) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))) : (((unsigned int) (_Bool)0)))) : (((/* implicit */unsigned int) var_2))));
}
