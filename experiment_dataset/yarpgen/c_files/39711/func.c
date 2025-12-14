/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39711
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39711 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39711
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
    var_12 = 4589243002705813961LL;
    var_13 = ((/* implicit */int) (((+(max((17179738112LL), (((/* implicit */long long int) (short)23692)))))) == (((/* implicit */long long int) ((((/* implicit */_Bool) min((var_3), (((/* implicit */long long int) (short)-23695))))) ? (((/* implicit */int) ((((/* implicit */int) (short)23692)) > (((/* implicit */int) var_5))))) : (((/* implicit */int) ((var_4) > (((/* implicit */long long int) 4294967295U))))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 15; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                {
                    var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) (!(((/* implicit */_Bool) 4043800751334976831LL))))), (((((/* implicit */_Bool) arr_4 [i_2])) ? (arr_1 [i_0] [i_1]) : (arr_1 [i_0] [i_1])))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) var_7)) - (((/* implicit */int) arr_7 [i_0] [i_0] [i_0]))))) ? (arr_8 [i_0 + 1] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_3 [i_0] [i_0] [i_0]) || (((/* implicit */_Bool) arr_4 [i_0])))))))) : (max((max((var_8), (((/* implicit */unsigned int) arr_4 [i_0])))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 4043800751334976831LL)) ? (((/* implicit */int) arr_5 [(unsigned short)9])) : (arr_1 [i_0 - 1] [i_0]))))))));
                    var_15 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0 - 1])))))) | (-4043800751334976829LL)));
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    for (long long int i_3 = 0; i_3 < 22; i_3 += 4) /* same iter space */
    {
        var_16 = ((/* implicit */unsigned char) (-((~(arr_9 [i_3])))));
        var_17 ^= ((/* implicit */unsigned int) (~(((((/* implicit */int) var_5)) >> (((((/* implicit */int) (short)-13457)) + (13466)))))));
    }
    for (long long int i_4 = 0; i_4 < 22; i_4 += 4) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned char i_5 = 0; i_5 < 22; i_5 += 3) /* same iter space */
        {
            var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) (~(((/* implicit */int) min((arr_10 [i_4]), (arr_10 [i_4])))))))));
            arr_17 [i_4] [i_5] = ((/* implicit */signed char) arr_15 [i_5]);
            arr_18 [i_4] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */long long int) 0U)) != (arr_12 [i_4] [i_4])));
            var_19 ^= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) min(((unsigned char)242), ((unsigned char)181)))) & (min((var_6), (((/* implicit */int) var_9)))))))));
        }
        for (unsigned char i_6 = 0; i_6 < 22; i_6 += 3) /* same iter space */
        {
            var_20 = ((/* implicit */_Bool) (~((~(12481389500109459903ULL)))));
            var_21 = ((/* implicit */unsigned long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)62))))), ((~(((/* implicit */int) (unsigned char)120))))));
        }
        var_22 = ((/* implicit */int) min((((arr_19 [i_4] [i_4]) | (((/* implicit */unsigned long long int) var_1)))), (((/* implicit */unsigned long long int) (~(-3537811684316555535LL))))));
        /* LoopNest 2 */
        for (unsigned int i_7 = 3; i_7 < 19; i_7 += 4) 
        {
            for (int i_8 = 0; i_8 < 22; i_8 += 4) 
            {
                {
                    var_23 *= ((/* implicit */signed char) var_5);
                    arr_26 [(short)15] [i_7] [i_7] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)129)) ^ (((/* implicit */int) arr_22 [i_7] [i_7 - 2]))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_5))))) : (max((arr_19 [i_4] [i_4]), (arr_19 [i_4] [i_4])))));
                    var_24 = ((/* implicit */_Bool) max(((short)27952), ((short)32341)));
                }
            } 
        } 
    }
    for (unsigned long long int i_9 = 2; i_9 < 16; i_9 += 4) 
    {
        arr_29 [i_9] = ((/* implicit */int) 4294967290U);
        arr_30 [i_9] [i_9] = ((/* implicit */int) arr_15 [i_9]);
    }
}
