/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48800
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48800 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48800
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
    var_12 = ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (signed char)42)));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_13 = ((/* implicit */_Bool) max((max((((/* implicit */int) var_8)), (((((/* implicit */_Bool) (signed char)49)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) ((((/* implicit */_Bool) 4294967290U)) || (((/* implicit */_Bool) (short)-20581))))) : (((/* implicit */int) max((var_0), (((/* implicit */short) (_Bool)1)))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (((/* implicit */long long int) arr_3 [i_0] [7])) : (var_5)));
            var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) arr_4 [i_0] [i_0] [(unsigned char)5]))));
            /* LoopNest 3 */
            for (long long int i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                for (long long int i_3 = 0; i_3 < 16; i_3 += 3) 
                {
                    for (signed char i_4 = 0; i_4 < 16; i_4 += 3) 
                    {
                        {
                            var_16 = ((/* implicit */long long int) var_1);
                            var_17 = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)240))));
                            arr_14 [i_4] [i_3] = ((/* implicit */unsigned long long int) ((unsigned char) ((long long int) var_6)));
                        }
                    } 
                } 
            } 
        }
        /* LoopSeq 1 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            arr_18 [i_0] [i_0] = ((/* implicit */unsigned long long int) (((_Bool)1) ? (-5) : (((/* implicit */int) (short)20042))));
            var_18 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 4080825559U))));
        }
    }
    for (short i_6 = 0; i_6 < 19; i_6 += 2) 
    {
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 19; i_7 += 3) 
        {
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_9 = 0; i_9 < 19; i_9 += 3) 
                    {
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) ((long long int) 4080825530U)))));
                                var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) var_2))));
                                arr_32 [i_6] [i_8] [i_8] [5LL] [i_9] [11LL] = (unsigned char)208;
                                var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (((((/* implicit */_Bool) (unsigned char)240)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_1))))) : (((var_1) ? (var_5) : (var_7)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (_Bool)1)), (346246419U)))) ? (((/* implicit */int) arr_27 [i_6])) : (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (short)-20603)) : (((/* implicit */int) (signed char)-54))))))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) min(((_Bool)1), ((_Bool)1))))) : (var_10)))));
                                var_22 = ((/* implicit */int) (unsigned char)192);
                            }
                        } 
                    } 
                    arr_33 [i_8] = ((/* implicit */long long int) (_Bool)1);
                }
            } 
        } 
        arr_34 [i_6] [i_6] = ((/* implicit */unsigned char) max((((unsigned long long int) (unsigned char)208)), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_4) ? (var_3) : (((/* implicit */int) (signed char)80))))) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (3429486663496797021LL))))));
    }
}
