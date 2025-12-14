/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201952
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201952 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201952
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
    for (int i_0 = 3; i_0 < 7; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_0] = ((((/* implicit */int) (short)20556)) + (((/* implicit */int) (short)-20535)));
                /* LoopNest 2 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_11 [i_0] [i_1] [i_2] [8LL] = ((/* implicit */_Bool) (+(((/* implicit */int) (short)20556))));
                            arr_12 [i_0] [6] [(short)2] [i_0] = ((/* implicit */_Bool) (+((((-(33776997205278720ULL))) / (((15223957786834062539ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)7176)))))))));
                        }
                    } 
                } 
                arr_13 [i_0] [i_1] = ((/* implicit */unsigned short) arr_10 [i_0] [i_0] [i_0] [5] [i_0]);
                arr_14 [i_0] = ((/* implicit */short) (+(((/* implicit */int) ((short) (short)1151)))));
                var_17 += ((/* implicit */signed char) arr_2 [i_0] [i_0] [i_0]);
            }
        } 
    } 
    var_18 = ((/* implicit */_Bool) ((short) 124387400));
    var_19 = ((/* implicit */unsigned short) ((short) (short)-27221));
    /* LoopSeq 4 */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        arr_19 [i_4] [i_4] = ((/* implicit */int) ((unsigned char) ((unsigned short) -3936980399731710703LL)));
        arr_20 [(_Bool)1] = ((/* implicit */_Bool) min((arr_18 [i_4]), (((/* implicit */short) ((signed char) (_Bool)1)))));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 11; i_5 += 3) 
    {
        var_20 -= ((/* implicit */short) ((int) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (short)-15028)))));
        var_21 ^= ((/* implicit */short) (~((+(((/* implicit */int) (short)20556))))));
    }
    for (unsigned int i_6 = 0; i_6 < 10; i_6 += 1) 
    {
        arr_27 [i_6] = ((/* implicit */_Bool) -2113742718);
        arr_28 [i_6] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-103))));
        arr_29 [i_6] = ((/* implicit */unsigned char) min(((~(((((/* implicit */int) (unsigned short)58360)) << (((((/* implicit */int) (unsigned char)248)) - (236))))))), (min((((((/* implicit */_Bool) 225371928)) ? (-225371928) : (((/* implicit */int) (unsigned char)248)))), (((((/* implicit */_Bool) -1470657235012876120LL)) ? (((/* implicit */int) arr_18 [i_6])) : (-225371955)))))));
        arr_30 [i_6] = ((/* implicit */unsigned int) ((unsigned short) ((short) min(((_Bool)0), ((_Bool)1)))));
    }
    for (unsigned long long int i_7 = 0; i_7 < 21; i_7 += 3) 
    {
        arr_34 [i_7] = ((/* implicit */unsigned char) min((3936980399731710710LL), (((/* implicit */long long int) (+(((/* implicit */int) (short)-28070)))))));
        var_22 = min(((-(((/* implicit */int) ((unsigned short) (short)-26119))))), ((+(((/* implicit */int) ((short) arr_31 [i_7] [i_7]))))));
    }
    var_23 = ((/* implicit */short) ((((/* implicit */int) min(((!((_Bool)1))), (var_3)))) << (((/* implicit */int) var_3))));
}
