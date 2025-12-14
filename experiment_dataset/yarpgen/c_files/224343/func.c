/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224343
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224343 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224343
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
    /* vectorizable */
    for (unsigned int i_0 = 4; i_0 < 20; i_0 += 3) 
    {
        /* LoopSeq 3 */
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            arr_5 [i_0 - 2] [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (signed char)66)))) * (((unsigned long long int) (signed char)66))));
            arr_6 [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)66))));
            var_18 = ((/* implicit */unsigned long long int) (-((+(((/* implicit */int) arr_1 [i_1]))))));
            arr_7 [i_0 - 4] [7ULL] [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) != (4271602985193315365ULL)));
        }
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
        {
            var_19 = ((/* implicit */_Bool) var_6);
            arr_11 [20LL] |= ((/* implicit */signed char) ((((/* implicit */int) ((short) var_8))) >> ((((+(((/* implicit */int) arr_0 [i_0] [i_2 - 1])))) + (25)))));
            /* LoopSeq 2 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                arr_16 [i_0] [i_2 - 1] [(signed char)17] [i_0] = ((/* implicit */unsigned long long int) arr_2 [i_0] [i_2 - 1]);
                arr_17 [(unsigned short)14] [i_2 - 1] [i_3] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_2) ? (((/* implicit */int) (unsigned short)59092)) : (((/* implicit */int) arr_9 [(_Bool)1] [(unsigned char)8] [(_Bool)1]))))) && (((/* implicit */_Bool) arr_2 [20LL] [(short)10]))));
                var_20 = ((/* implicit */unsigned int) ((long long int) var_16));
            }
            for (long long int i_4 = 0; i_4 < 23; i_4 += 3) 
            {
                var_21 = ((/* implicit */short) var_5);
                /* LoopSeq 3 */
                for (signed char i_5 = 0; i_5 < 23; i_5 += 2) 
                {
                    var_22 = ((/* implicit */unsigned short) (+(4273381724U)));
                    var_23 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) -4438169068112723147LL)))) || (((-7511829344225675578LL) != (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_0 - 4] [i_0 - 1])))))));
                    var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)121)) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0 - 3] [i_2 - 1] [i_2 - 1]))) : (4438169068112723150LL)));
                }
                for (long long int i_6 = 2; i_6 < 20; i_6 += 3) 
                {
                    var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_13)) ? (((((/* implicit */int) arr_22 [i_4] [2U])) << (((-4438169068112723147LL) + (4438169068112723153LL))))) : ((+(((/* implicit */int) var_12))))));
                    var_26 = ((/* implicit */signed char) ((unsigned short) arr_20 [i_2 - 1] [i_2] [i_6 + 2]));
                }
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    arr_27 [(signed char)11] [(_Bool)1] [i_0] [i_2 - 1] = ((signed char) (short)-3395);
                    var_27 |= ((/* implicit */unsigned int) var_10);
                }
            }
        }
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            var_28 = ((/* implicit */_Bool) max((var_28), (((/* implicit */_Bool) arr_12 [(unsigned short)12] [12ULL] [i_8]))));
            arr_31 [i_0 - 3] [i_0 - 4] [i_0] = ((/* implicit */unsigned long long int) arr_8 [i_8]);
        }
        var_29 = ((/* implicit */signed char) (((-(var_6))) / (((/* implicit */long long int) (+(((/* implicit */int) (short)-3395)))))));
        arr_32 [i_0 - 3] [i_0] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) (short)2612)) ? (((/* implicit */int) (signed char)115)) : (((/* implicit */int) arr_1 [i_0]))))));
        arr_33 [i_0] [4LL] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) var_7))) - (-4438169068112723147LL)));
        arr_34 [i_0] = var_4;
    }
    var_30 = ((/* implicit */signed char) (short)3395);
}
