/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200226
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200226 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200226
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
    for (int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 1) 
                {
                    for (unsigned char i_3 = 2; i_3 < 17; i_3 += 1) 
                    {
                        for (int i_4 = 3; i_4 < 18; i_4 += 4) 
                        {
                            {
                                var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (short)127)) >> (((/* implicit */int) var_12))))) ? (((/* implicit */long long int) arr_8 [i_3 + 3] [i_3] [i_3 + 3] [i_2] [i_4 - 3])) : (((((/* implicit */long long int) var_5)) - (-9117148734227238597LL)))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) min((arr_7 [i_2] [i_2] [i_3] [i_4]), (-1830424552)))), (arr_8 [i_0] [(unsigned short)7] [i_2] [i_2] [i_4 - 2])))) : (((9106160736894579793ULL) << (((/* implicit */int) (_Bool)0))))));
                                var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) min((-9117148734227238597LL), (9117148734227238596LL))))));
                                var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 6653788938475562994ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((unsigned short) arr_2 [i_0])), (((/* implicit */unsigned short) min(((unsigned char)249), ((unsigned char)162)))))))) : (var_9)));
                                arr_13 [i_2] [i_3] [i_1] [i_1] [i_2] = ((/* implicit */unsigned int) min((((/* implicit */long long int) (signed char)91)), (9117148734227238597LL)));
                                arr_14 [i_0] [i_1] [i_2] [19] [i_4] [i_2] = ((/* implicit */_Bool) (~((~(-9117148734227238597LL)))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_5 = 0; i_5 < 21; i_5 += 3) 
                {
                    for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */long long int) (unsigned short)57568);
                            var_19 = ((/* implicit */unsigned long long int) max((var_19), (((min((((/* implicit */unsigned long long int) -2053884003)), (max((9106160736894579793ULL), (((/* implicit */unsigned long long int) (unsigned short)38052)))))) / (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)84)))))));
                            var_20 -= ((/* implicit */unsigned int) arr_0 [i_0]);
                        }
                    } 
                } 
                var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) (+(arr_9 [16] [i_1] [i_1] [i_1]))))));
                var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */long long int) 1992608048U)) < (-9117148734227238597LL))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (signed char)-56))))) ? (((((/* implicit */_Bool) 2097151U)) ? (((/* implicit */long long int) arr_8 [i_0] [i_0] [i_1] [i_0] [i_1])) : (-9117148734227238597LL))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) ((_Bool) var_0))))))))));
            }
        } 
    } 
    var_23 = ((/* implicit */int) ((short) -2086421118980956491LL));
    var_24 = ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned short)27483))));
    var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((9106160736894579793ULL) * (((/* implicit */unsigned long long int) 2054977040U))))))))));
}
