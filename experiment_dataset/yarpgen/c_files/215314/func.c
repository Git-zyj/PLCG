/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215314
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215314 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215314
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
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                {
                    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_5 [6LL] [(unsigned char)2] [i_0]), (arr_5 [i_0] [i_1] [i_2])))) || ((!(((/* implicit */_Bool) 32768U))))));
                    /* LoopSeq 1 */
                    for (long long int i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        var_21 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(-1475869877)))) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1] [i_0])))))), (max((17999269258429732434ULL), (((/* implicit */unsigned long long int) arr_9 [(_Bool)1] [i_1]))))));
                        arr_13 [i_3] [i_2] [(signed char)4] [(signed char)4] = ((/* implicit */int) 4286578688U);
                        var_22 = ((((/* implicit */_Bool) max(((unsigned char)77), (((/* implicit */unsigned char) arr_0 [i_1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (((unsigned int) arr_3 [i_1] [i_1])));
                    }
                    arr_14 [(unsigned char)0] [12] [(unsigned short)6] [i_2] = ((/* implicit */signed char) max((((((/* implicit */_Bool) -1475869895)) ? (8125027379946902252LL) : (((/* implicit */long long int) 246095577U)))), (((/* implicit */long long int) ((192196543) - (((/* implicit */int) (unsigned char)126)))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_4 = 3; i_4 < 11; i_4 += 3) 
    {
        for (unsigned int i_5 = 1; i_5 < 9; i_5 += 3) 
        {
            {
                var_23 = (-(var_19));
                var_24 = ((/* implicit */unsigned int) (unsigned char)95);
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_6 = 0; i_6 < 18; i_6 += 4) 
    {
        for (unsigned short i_7 = 1; i_7 < 15; i_7 += 1) 
        {
            {
                var_25 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) 3632853702U)), (144115188075790336ULL)));
                var_26 = ((/* implicit */unsigned short) (short)-16384);
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_8 = 0; i_8 < 11; i_8 += 3) 
    {
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            for (unsigned int i_10 = 0; i_10 < 11; i_10 += 2) 
            {
                {
                    arr_33 [i_10] [i_9] [i_9] [(signed char)2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_2 [i_8] [i_8])), (arr_3 [i_9] [i_9])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_8] [i_10])))))) : (((var_0) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)36))) : (arr_3 [i_8] [i_8])))));
                    var_27 = ((/* implicit */unsigned char) arr_4 [i_8] [i_10]);
                    var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? (var_12) : (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_8] [12LL])) || (((/* implicit */_Bool) arr_26 [i_9]))))), (arr_10 [i_8] [i_8] [i_9] [i_10])))));
                    arr_34 [i_9] [7U] [i_10] = ((/* implicit */long long int) (+(max((((/* implicit */unsigned int) ((((/* implicit */int) (short)16384)) << (((((/* implicit */int) (unsigned char)164)) - (164)))))), (arr_1 [i_9])))));
                }
            } 
        } 
    } 
}
