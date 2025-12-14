/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235860
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235860 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235860
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 15; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (~((+(((/* implicit */int) (signed char)16))))))) ? (((/* implicit */long long int) min((arr_3 [i_0 - 1]), (2906632484U)))) : (max(((~(9223372036854775807LL))), (9223372036854775807LL))))))));
                arr_5 [18ULL] [i_0] [i_1 + 2] = ((/* implicit */signed char) 9223372036854775807LL);
            }
        } 
    } 
    /* LoopSeq 2 */
    for (int i_2 = 2; i_2 < 8; i_2 += 1) 
    {
        var_13 = ((/* implicit */signed char) (-9223372036854775807LL - 1LL));
        arr_9 [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)96)) ? (((/* implicit */int) (_Bool)1)) : (8384512)));
        arr_10 [i_2 + 1] = ((/* implicit */unsigned int) arr_4 [i_2]);
    }
    for (long long int i_3 = 0; i_3 < 20; i_3 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_4 = 1; i_4 < 19; i_4 += 4) 
        {
            for (unsigned int i_5 = 2; i_5 < 18; i_5 += 1) 
            {
                {
                    arr_18 [i_3] [i_3] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) (short)7633)) && (((/* implicit */_Bool) arr_16 [i_3] [i_3] [9U]))))), (max((((/* implicit */long long int) (unsigned char)118)), (-5049844192109075404LL)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) -9223372036854775779LL)) ? (3092377780456419718LL) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_3] [i_4] [i_4]))))))))) : (((/* implicit */int) (!((_Bool)1))))));
                    var_14 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) (short)32767)))))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) -51475911)) == (((((/* implicit */_Bool) arr_17 [i_3] [i_4] [i_4] [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)31028))) : (var_8)))))) : ((+(((/* implicit */int) (_Bool)1))))));
                }
            } 
        } 
        var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+((-(((/* implicit */int) (short)-1))))))) ? (((/* implicit */int) arr_16 [i_3] [i_3] [i_3])) : ((+(var_10)))));
        var_16 = ((/* implicit */unsigned short) (short)7633);
        arr_19 [(signed char)4] [i_3] = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) arr_14 [i_3] [i_3])) ? (1460819754641685164ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_3] [i_3]))))));
    }
}
