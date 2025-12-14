/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224426
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224426 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224426
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_11 = ((/* implicit */short) min((var_11), (((/* implicit */short) -3191844114568943867LL))));
        var_12 -= ((/* implicit */unsigned short) min(((-(((/* implicit */int) ((var_1) && (((/* implicit */_Bool) -1351385284613647492LL))))))), (((/* implicit */int) ((((/* implicit */_Bool) (+(var_2)))) && ((_Bool)1))))));
    }
    for (unsigned int i_1 = 0; i_1 < 24; i_1 += 1) 
    {
        /* LoopSeq 3 */
        for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 3) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned long long int i_3 = 1; i_3 < 21; i_3 += 4) 
            {
                for (short i_4 = 0; i_4 < 24; i_4 += 4) 
                {
                    {
                        arr_12 [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((146378699U), (((/* implicit */unsigned int) arr_11 [i_1] [i_2] [i_1] [i_4]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) 1351385284613647492LL)) && (((/* implicit */_Bool) 8659168061052650324ULL))))) : (((var_5) ? (((/* implicit */int) arr_11 [i_1] [(short)14] [i_1] [i_1])) : (((/* implicit */int) arr_11 [i_1] [(signed char)16] [i_1] [i_4]))))));
                        arr_13 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((-5110778060143304419LL), (1351385284613647494LL)))) ? (-9017232338557480223LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-7459)))));
                    }
                } 
            } 
            var_13 ^= ((/* implicit */int) -1351385284613647493LL);
            arr_14 [(short)20] &= ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)26086))));
        }
        for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 3) /* same iter space */
        {
            var_14 -= ((/* implicit */int) ((((/* implicit */_Bool) (+(-1985186432213943725LL)))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (arr_10 [i_1] [i_5] [i_1] [(unsigned short)12] [i_5] [(unsigned short)12]))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) <= (13009880932862554255ULL)))))))));
            arr_17 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) ((((1351385284613647492LL) <= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) -248052505636373256LL)))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_1] [i_1] [i_1] [i_5] [i_5] [i_5])) || (((/* implicit */_Bool) ((1351385284613647492LL) >> (((((/* implicit */int) (short)30685)) - (30680)))))))))) : (5110778060143304419LL)));
        }
        /* vectorizable */
        for (unsigned long long int i_6 = 0; i_6 < 24; i_6 += 3) /* same iter space */
        {
            var_15 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (5436863140846997361ULL) : (((/* implicit */unsigned long long int) 5110778060143304418LL))))) || (((/* implicit */_Bool) -5110778060143304419LL))));
            arr_22 [i_1] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 5436863140846997361ULL)) ? (((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) var_8))))) : (((/* implicit */int) (short)32767))));
        }
        arr_23 [i_1] = ((/* implicit */signed char) var_9);
    }
    var_16 ^= ((((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) var_9))))), ((+(((/* implicit */int) var_7))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) min((var_8), (var_8)))) || (((((/* implicit */_Bool) -5110778060143304412LL)) || (((/* implicit */_Bool) var_10)))))))) : ((-(((((/* implicit */long long int) ((/* implicit */int) (signed char)67))) / (-8679822373475309012LL))))));
    var_17 = ((/* implicit */unsigned long long int) var_9);
    /* LoopNest 2 */
    for (signed char i_7 = 0; i_7 < 17; i_7 += 4) 
    {
        for (unsigned long long int i_8 = 0; i_8 < 17; i_8 += 1) 
        {
            {
                arr_28 [i_8] = ((/* implicit */unsigned char) ((var_1) ? (((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)10669)) & (((/* implicit */int) var_7))))) & (min((((/* implicit */unsigned long long int) (unsigned short)39449)), (0ULL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(13009880932862554255ULL)))) ? (-1351385284613647504LL) : (((/* implicit */long long int) (-(arr_6 [i_8])))))))));
                var_18 &= ((/* implicit */int) min((((((/* implicit */_Bool) -1351385284613647485LL)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)86)) || (((/* implicit */_Bool) 18446744073709551615ULL)))))) : (1351385284613647496LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_27 [i_7] [i_8])) || (((/* implicit */_Bool) arr_2 [16ULL])))))));
            }
        } 
    } 
}
