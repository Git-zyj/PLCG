/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5011
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5011 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5011
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
    var_13 = ((/* implicit */long long int) (unsigned short)57741);
    var_14 = ((/* implicit */_Bool) var_11);
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_2 [0]), (((/* implicit */unsigned long long int) (((_Bool)1) && (((/* implicit */_Bool) (signed char)-46)))))))) ? (((((/* implicit */_Bool) (signed char)-56)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (2693278381212657579ULL))) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [6U] [10] [(unsigned short)10])) || (var_12)))), (((unsigned int) 2887684))))))))));
            var_16 *= ((/* implicit */unsigned short) var_4);
            /* LoopSeq 1 */
            for (unsigned short i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                var_17 = ((_Bool) ((unsigned short) arr_8 [3LL] [i_0] [i_0] [i_0]));
                /* LoopSeq 2 */
                for (signed char i_3 = 3; i_3 < 18; i_3 += 3) 
                {
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (!(((/* implicit */_Bool) max((arr_9 [i_0] [i_3 + 1] [(_Bool)1] [i_3]), (arr_9 [12] [i_3 - 1] [(short)0] [i_3])))));
                    var_18 = ((/* implicit */_Bool) ((arr_2 [i_0]) ^ (((/* implicit */unsigned long long int) min((((1646832595U) ^ (((/* implicit */unsigned int) -259905784)))), (((/* implicit */unsigned int) 2887696)))))));
                }
                for (long long int i_4 = 0; i_4 < 21; i_4 += 4) 
                {
                    var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((((-2887689) + (2147483647))) >> (((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_6 [i_4] [i_1] [i_2] [i_4])) : (((/* implicit */int) arr_4 [i_2] [i_2])))) - (7681))))))));
                    var_20 = ((/* implicit */int) var_8);
                    /* LoopSeq 2 */
                    for (short i_5 = 0; i_5 < 21; i_5 += 4) 
                    {
                        var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) (unsigned char)8)) ? (4012696391296088812ULL) : (((/* implicit */unsigned long long int) 2887705))))))));
                        var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_7) ? (((/* implicit */int) (signed char)71)) : (((/* implicit */int) (signed char)74))))) ? (((/* implicit */int) (signed char)-60)) : (var_4)))) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_3)), (3574805209U)))) ? (((unsigned long long int) var_5)) : (((unsigned long long int) 2887677)))) : (((/* implicit */unsigned long long int) min(((-(var_4))), (((int) (signed char)45)))))));
                    }
                    for (long long int i_6 = 0; i_6 < 21; i_6 += 3) 
                    {
                        var_23 = ((/* implicit */short) (+(2887705)));
                        var_24 = ((/* implicit */long long int) min(((signed char)-72), (((/* implicit */signed char) ((_Bool) ((((/* implicit */int) (signed char)-80)) - (((/* implicit */int) (signed char)-38))))))));
                    }
                    arr_20 [i_0] [i_1] [i_0] = (_Bool)1;
                }
                var_25 = ((/* implicit */long long int) var_7);
            }
            arr_21 [i_0] [i_0] = ((/* implicit */unsigned char) arr_15 [i_0]);
            arr_22 [i_0] [i_0] [13] = ((/* implicit */int) arr_2 [i_0]);
        }
        var_26 = ((/* implicit */long long int) min((-1048383078), (max((((/* implicit */int) ((short) (signed char)-44))), (((((/* implicit */_Bool) (signed char)74)) ? (((/* implicit */int) var_9)) : (-1940071631)))))));
    }
}
