/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29089
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29089 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29089
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        var_14 = ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) 226435823U)))));
        arr_2 [12U] = ((/* implicit */short) 4294967295U);
    }
    /* LoopNest 3 */
    for (unsigned short i_1 = 0; i_1 < 16; i_1 += 3) 
    {
        for (int i_2 = 0; i_2 < 16; i_2 += 1) 
        {
            for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
            {
                {
                    arr_10 [i_2] [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1))) : ((+(4503599627370495ULL)))));
                    arr_11 [i_1] [(unsigned char)10] [i_1] [i_1] &= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) - (18442240474082181119ULL)));
                    arr_12 [i_2] [0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 18442240474082181120ULL)) ? (((/* implicit */unsigned long long int) (~(((var_9) - (((/* implicit */long long int) ((/* implicit */int) var_10)))))))) : (((((/* implicit */_Bool) var_0)) ? (max((((/* implicit */unsigned long long int) (short)-10603)), (4503599627370496ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)238)) || (((/* implicit */_Bool) (unsigned char)36))))))))));
                    arr_13 [5LL] [i_2] [i_3] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)238)) + (-2147483641)))) - (max((((/* implicit */unsigned long long int) 5560815683190490273LL)), (var_4)))))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */int) var_12)) - (((/* implicit */int) var_0)))) - (((/* implicit */int) (_Bool)1))))) : (((((((/* implicit */_Bool) 9223372036854775805LL)) ? (18442240474082181120ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) - (((/* implicit */unsigned long long int) var_5))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 17; i_4 += 4) 
    {
        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_6 = 0; i_6 < 17; i_6 += 1) 
                {
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        {
                            var_15 *= ((/* implicit */unsigned short) var_2);
                            arr_24 [i_7] = ((/* implicit */_Bool) var_2);
                        }
                    } 
                } 
                arr_25 [i_5] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) -1LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)238))) : (var_5)))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) ^ (((5281731496931726770ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))))));
                var_16 = ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */int) (short)-11132)) / (((/* implicit */int) (short)16556))))) > (max((((/* implicit */unsigned int) var_2)), (((unsigned int) (unsigned char)0))))));
            }
        } 
    } 
    var_17 = ((/* implicit */signed char) (unsigned char)255);
}
