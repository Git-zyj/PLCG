/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234749
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234749 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234749
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
    /* vectorizable */
    for (short i_0 = 2; i_0 < 10; i_0 += 1) 
    {
        var_13 = ((/* implicit */short) ((((((/* implicit */int) var_11)) >= (((/* implicit */int) arr_1 [i_0] [i_0 - 2])))) ? (((/* implicit */int) (short)5)) : (((/* implicit */int) arr_1 [i_0 - 1] [i_0 - 1]))));
        var_14 = ((/* implicit */short) ((((((/* implicit */int) (short)22028)) - (((/* implicit */int) var_10)))) < (((/* implicit */int) (short)127))));
        var_15 *= ((/* implicit */short) (!(((/* implicit */_Bool) var_2))));
    }
    for (short i_1 = 1; i_1 < 17; i_1 += 3) 
    {
        var_16 += ((/* implicit */short) ((((/* implicit */_Bool) ((short) var_9))) ? (((/* implicit */int) ((((((/* implicit */_Bool) (short)9290)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (short)-22053)))) <= (((((/* implicit */int) var_3)) % (((/* implicit */int) arr_3 [i_1]))))))) : (((/* implicit */int) ((((/* implicit */int) var_11)) <= (((((/* implicit */_Bool) (short)22015)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_3 [i_1])))))))));
        /* LoopNest 2 */
        for (short i_2 = 1; i_2 < 18; i_2 += 4) 
        {
            for (short i_3 = 3; i_3 < 17; i_3 += 1) 
            {
                {
                    arr_8 [i_1] [i_2] [i_1] [i_3] = ((short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)19491)) ? (((/* implicit */int) (short)-14733)) : (((/* implicit */int) var_10))))) ? (((/* implicit */int) ((((/* implicit */int) arr_6 [i_1 + 3] [i_3])) >= (((/* implicit */int) var_5))))) : (((/* implicit */int) ((short) (short)127)))));
                    var_17 = ((short) ((((/* implicit */int) ((short) arr_2 [i_1]))) & (((/* implicit */int) (short)-22028))));
                    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_3 + 1] [i_1 + 1])) & (((/* implicit */int) (short)15725))))) ? (((/* implicit */int) min(((short)-15724), (arr_5 [i_1 - 1] [i_3 - 1])))) : (((((((/* implicit */int) (short)22027)) | (((/* implicit */int) (short)13)))) | (((((/* implicit */int) var_1)) ^ (((/* implicit */int) (short)29962))))))));
                }
            } 
        } 
        var_19 = ((/* implicit */short) ((((/* implicit */_Bool) arr_6 [i_1] [i_1 + 3])) ? ((-(((/* implicit */int) ((((/* implicit */_Bool) (short)-128)) || (((/* implicit */_Bool) arr_6 [i_1] [i_1]))))))) : (((/* implicit */int) var_0))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_4 = 0; i_4 < 20; i_4 += 4) 
        {
            /* LoopNest 2 */
            for (short i_5 = 1; i_5 < 19; i_5 += 4) 
            {
                for (short i_6 = 0; i_6 < 20; i_6 += 1) 
                {
                    {
                        var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_6 [i_4] [i_4]))))) && (((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_4]))))))))));
                        var_21 = ((short) arr_16 [i_1 + 1] [i_1 + 2] [i_1 + 1] [i_1 + 1]);
                        var_22 = var_12;
                    }
                } 
            } 
            arr_18 [i_4] [i_1] [i_1 + 2] = ((/* implicit */short) ((((/* implicit */_Bool) ((short) (short)-15712))) ? ((+(((/* implicit */int) var_6)))) : (((((/* implicit */int) var_7)) - (((/* implicit */int) var_8))))));
            var_23 = ((short) var_7);
        }
        var_24 = ((/* implicit */short) max((var_24), (((short) (short)15885))));
    }
    var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_0))))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) var_8)))) : (((/* implicit */int) min(((short)-15725), (var_4))))))) ? (((/* implicit */int) min((((short) (short)-15741)), (min(((short)32759), (var_3)))))) : (((/* implicit */int) ((short) ((short) var_3)))))))));
    var_26 = var_4;
    var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) ((((/* implicit */int) var_3)) * (((/* implicit */int) var_6)))))));
    var_28 = var_9;
}
