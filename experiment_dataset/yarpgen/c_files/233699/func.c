/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233699
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233699 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233699
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
    var_11 = ((/* implicit */_Bool) 4611686018427387900ULL);
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 3) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) (~((~(((/* implicit */int) (unsigned short)9162))))));
        var_12 = ((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (288089638663356416LL) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))), (((unsigned long long int) (unsigned short)28351)))) < (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 612279258)) ? (((/* implicit */int) max(((short)-10844), (((/* implicit */short) (_Bool)1))))) : (((((/* implicit */int) (short)-10844)) + (((/* implicit */int) (short)-10844))))))));
        var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)32869))))) ? (min((823703408), (((/* implicit */int) (unsigned short)41514)))) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [12LL])) >> (((((/* implicit */int) (unsigned short)24021)) - (23999)))))) && ((_Bool)0)))))))));
    }
    for (long long int i_1 = 0; i_1 < 18; i_1 += 3) /* same iter space */
    {
        var_14 = ((/* implicit */unsigned long long int) (unsigned short)11560);
        arr_5 [i_1] = ((/* implicit */short) max((arr_0 [(short)1]), (((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)24021)))))));
        /* LoopSeq 1 */
        for (short i_2 = 3; i_2 < 16; i_2 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_3 = 1; i_3 < 17; i_3 += 3) 
            {
                for (short i_4 = 0; i_4 < 18; i_4 += 4) 
                {
                    {
                        var_15 ^= ((/* implicit */int) ((((long long int) -8652184415551589393LL)) + (((/* implicit */long long int) ((/* implicit */int) max((arr_6 [i_3 - 1] [10] [i_2 + 1]), (arr_6 [i_3 - 1] [i_4] [i_2 + 1])))))));
                        arr_13 [i_1] = ((/* implicit */_Bool) arr_7 [(_Bool)1]);
                        var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) ((_Bool) ((6524718927151658873LL) / (((/* implicit */long long int) ((/* implicit */int) arr_3 [(_Bool)1] [i_3 + 1])))))))));
                    }
                } 
            } 
            var_17 = ((/* implicit */unsigned char) ((((((/* implicit */int) max(((unsigned short)12730), (((/* implicit */unsigned short) arr_12 [6LL] [i_2]))))) ^ (((/* implicit */int) arr_3 [i_1] [i_2 + 1])))) << (((((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (unsigned short)24021)), (arr_10 [i_1] [i_1] [(short)2] [i_2])))) & (18446744073709551615ULL))) - (24013ULL)))));
            var_18 -= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_7))));
        }
        var_19 -= ((/* implicit */signed char) (short)-1);
    }
}
