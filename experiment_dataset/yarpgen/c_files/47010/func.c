/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47010
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47010 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47010
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
    var_13 = ((/* implicit */signed char) var_2);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        var_14 -= ((/* implicit */signed char) (+(arr_0 [i_0])));
        var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) min((((((/* implicit */_Bool) ((short) (short)32766))) ? (((((/* implicit */_Bool) (unsigned short)48951)) ? (1627614305920768224ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)4095))))) : (arr_1 [i_0]))), (((/* implicit */unsigned long long int) (!(((((/* implicit */unsigned long long int) arr_0 [i_0])) > (arr_1 [i_0])))))))))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    var_16 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)255)) >> (((((((/* implicit */_Bool) (short)-23974)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (signed char)-60)))) - (42375)))))) ? ((+(((/* implicit */int) arr_6 [i_0] [i_1] [i_1] [i_1])))) : (((((/* implicit */int) (short)-23974)) - (((/* implicit */int) (_Bool)1))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */int) (!(((_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)11140))) + (3418901514825431479LL))))));
                                arr_12 [i_0] [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_2))));
                            }
                        } 
                    } 
                    arr_13 [i_0] [i_1] [i_2] [(short)3] = ((/* implicit */unsigned long long int) var_7);
                    var_18 -= ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)112)) ? (((/* implicit */int) (short)-20552)) : (-408409222)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(arr_6 [i_1] [i_1] [i_1] [(unsigned char)3]))))) : (((((/* implicit */_Bool) (unsigned char)74)) ? (((/* implicit */unsigned long long int) -1677695981)) : (1627614305920768250ULL))))));
                    var_19 += arr_6 [i_0] [9LL] [i_0] [i_0];
                }
            } 
        } 
    }
    for (long long int i_5 = 0; i_5 < 13; i_5 += 3) 
    {
        var_20 = ((/* implicit */unsigned char) max((var_20), (((unsigned char) ((((/* implicit */int) var_9)) >> ((((+(13466036295510206834ULL))) - (13466036295510206819ULL))))))));
        arr_17 [8] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) (short)-6)) || (((/* implicit */_Bool) (short)-3944)))) && (((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)249)) / (402326798)))))))) > (var_7)));
        var_21 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)118)) ? (((/* implicit */int) (unsigned char)183)) : (((/* implicit */int) (unsigned char)177))));
    }
}
