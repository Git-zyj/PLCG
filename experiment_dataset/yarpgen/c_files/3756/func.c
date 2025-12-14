/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3756
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3756 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3756
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
    var_13 = ((/* implicit */long long int) max((((/* implicit */int) ((max((var_10), (((/* implicit */unsigned int) (short)-1765)))) > (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))), (((((/* implicit */int) ((_Bool) var_10))) - (((/* implicit */int) min((var_5), (var_5))))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            var_14 = ((/* implicit */_Bool) ((((/* implicit */int) (short)1765)) | (((/* implicit */int) (unsigned short)50410))));
            var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)50410)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_3 [(short)17] [(short)17])))))));
            var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (((arr_2 [i_0]) & (((/* implicit */long long int) ((/* implicit */int) (short)-29428))))) : (arr_1 [i_1])));
        }
        /* vectorizable */
        for (short i_2 = 0; i_2 < 23; i_2 += 1) /* same iter space */
        {
            var_17 -= ((/* implicit */long long int) (~(1450636794U)));
            var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) arr_3 [i_2] [8U]))));
        }
        for (short i_3 = 0; i_3 < 23; i_3 += 1) /* same iter space */
        {
            var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0] [i_3])) ? (((((/* implicit */unsigned long long int) 1450636808U)) | (521442294687947442ULL))) : (((((/* implicit */unsigned long long int) arr_2 [i_0])) / (arr_0 [i_3] [i_0])))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_0 [i_3] [i_0]) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0]))))))) + ((~(9791522754262644404ULL))))) : (((/* implicit */unsigned long long int) var_10))));
            arr_11 [i_0] = ((/* implicit */signed char) min((((/* implicit */long long int) max((min((var_10), (((/* implicit */unsigned int) var_6)))), (var_10)))), (1978946891730826002LL)));
        }
        var_20 = ((/* implicit */short) (-(((((/* implicit */_Bool) 3506416865U)) ? (1450636794U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)50411)))))));
        var_21 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) max((((/* implicit */unsigned int) (_Bool)1)), (arr_8 [8LL] [i_0] [i_0])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 7807040829768197689LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-93))))) : (max((((/* implicit */unsigned long long int) var_6)), (arr_6 [i_0] [i_0] [(short)12])))))));
        /* LoopNest 3 */
        for (unsigned char i_4 = 0; i_4 < 23; i_4 += 4) 
        {
            for (signed char i_5 = 3; i_5 < 21; i_5 += 1) 
            {
                for (long long int i_6 = 0; i_6 < 23; i_6 += 2) 
                {
                    {
                        var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) ((((7807040829768197710LL) & (arr_20 [8] [i_5 + 2] [8] [i_0]))) % (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) arr_16 [i_0] [i_5 + 2] [i_5 + 1])))))))))));
                        arr_22 [i_0] [i_0] [i_5 - 1] [i_6] [i_0] = ((/* implicit */signed char) ((short) ((unsigned long long int) var_5)));
                    }
                } 
            } 
        } 
    }
}
