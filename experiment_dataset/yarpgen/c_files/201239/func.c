/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201239
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201239 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201239
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
    var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) ((((/* implicit */long long int) (+(((((/* implicit */int) var_10)) + (((/* implicit */int) var_13))))))) + ((+(((var_2) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (var_11))))))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 1; i_2 < 9; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 4; i_4 < 10; i_4 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */_Bool) max((((/* implicit */int) var_10)), (max((((arr_5 [i_2]) ^ (((/* implicit */int) arr_3 [i_0])))), (((/* implicit */int) min((arr_3 [i_0]), (var_5))))))));
                                var_16 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_2] [i_3] [4U])) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (arr_11 [i_0] [i_1] [i_2] [i_3])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_3)), (var_6))))) : (((unsigned long long int) arr_13 [i_0] [i_1] [i_2] [i_3] [i_3] [i_4]))))) ? (((((/* implicit */_Bool) max((12828323139143620459ULL), (((/* implicit */unsigned long long int) var_4))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 5377822017243530410ULL)) ? (((/* implicit */int) (unsigned short)9984)) : (((/* implicit */int) var_10))))) : (min((arr_9 [(unsigned char)10] [i_3]), (((/* implicit */long long int) var_8)))))) : (((/* implicit */long long int) var_8))));
                                var_17 = ((/* implicit */unsigned int) (+(5928982713426851731LL)));
                                var_18 = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */int) arr_3 [i_0])), (((((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_2] [i_0] [i_1])) ? (var_12) : (2147483647)))))) ? (((/* implicit */long long int) max((2147483641), (903763069)))) : (((((/* implicit */long long int) max((-1229138077), (((/* implicit */int) (unsigned short)61751))))) / (max((arr_9 [i_1] [i_3]), (((/* implicit */long long int) var_5))))))));
                            }
                        } 
                    } 
                    arr_14 [i_0] [i_0] [i_2] [(unsigned short)8] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(-6630746985232869319LL)))) ? (((long long int) ((1229138077) >> (((((/* implicit */int) var_10)) - (205)))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((arr_4 [i_1] [i_2]) << (((((/* implicit */int) var_3)) - (210)))))) == ((-(var_11)))))))));
                    arr_15 [i_0] [i_1] [i_2] = ((/* implicit */int) (((!(((/* implicit */_Bool) 8595061383027195323LL)))) && ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) 4268825396U)) ? (var_11) : (((/* implicit */long long int) var_7)))))))));
                }
            } 
        } 
    } 
}
