/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232190
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232190 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232190
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
    /* LoopNest 3 */
    for (long long int i_0 = 2; i_0 < 22; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                {
                    arr_8 [i_2] = ((/* implicit */unsigned int) 15LL);
                    /* LoopSeq 4 */
                    for (unsigned long long int i_3 = 1; i_3 < 20; i_3 += 4) 
                    {
                        var_19 += ((/* implicit */unsigned int) var_5);
                        arr_12 [i_1] [i_2] = (+(4273951213U));
                    }
                    /* vectorizable */
                    for (unsigned short i_4 = 0; i_4 < 23; i_4 += 4) 
                    {
                        arr_16 [i_2] [i_2] = ((((/* implicit */_Bool) 4273951230U)) || (((/* implicit */_Bool) (unsigned short)15935)));
                        arr_17 [i_2] = ((/* implicit */short) var_5);
                        arr_18 [6LL] [6LL] [6LL] [i_4] [i_4] &= ((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)18547))));
                        var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 21016063U)) ? (6263273365931083467LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-24193)))));
                    }
                    for (unsigned int i_5 = 2; i_5 < 20; i_5 += 4) 
                    {
                        arr_23 [i_2] = ((/* implicit */unsigned int) var_4);
                        var_21 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)0))));
                        var_22 = ((unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)24195)) ? (8250886552561646836LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)18195)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) 4ULL)))) : (max((262143ULL), (((/* implicit */unsigned long long int) (short)24204))))));
                        arr_24 [i_0] [i_0] [i_0 + 1] [i_2] [i_0 - 2] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) (short)-8601)))))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-24179))))) : (((((/* implicit */_Bool) 21016088U)) ? (((/* implicit */unsigned long long int) 21016088U)) : (9726854472334325597ULL)))));
                        var_23 -= ((/* implicit */short) ((15419152928638479182ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                    }
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        var_24 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)8615)) ? (68719476735ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)4096)))))) ? (max((((/* implicit */long long int) (_Bool)1)), (-1LL))) : (((((/* implicit */long long int) ((/* implicit */int) arr_28 [i_0] [i_0] [i_0] [i_0 + 1] [i_1]))) + (arr_9 [i_0 + 1] [i_0] [i_0] [i_0 + 1] [5ULL])))));
                        /* LoopSeq 1 */
                        for (unsigned int i_7 = 0; i_7 < 23; i_7 += 4) 
                        {
                            var_25 = ((/* implicit */long long int) ((int) 3863747142U));
                            var_26 += ((/* implicit */unsigned long long int) (short)-8586);
                        }
                        var_27 = ((/* implicit */int) (short)-8192);
                    }
                }
            } 
        } 
    } 
    var_28 -= ((/* implicit */short) (+(((/* implicit */int) (short)-8619))));
    var_29 = ((/* implicit */long long int) min((17782245728362402063ULL), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-8601)))))));
    var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) max((((/* implicit */short) (signed char)87)), ((short)-15390))))));
    var_31 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) 4273951236U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (16946538171355165527ULL)))));
}
