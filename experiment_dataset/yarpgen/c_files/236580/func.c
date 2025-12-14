/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236580
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236580 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236580
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
    var_16 = ((/* implicit */short) ((signed char) ((long long int) (+(1453646558)))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            arr_5 [i_0] [i_1] |= ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) 3028772081082972995ULL)) ? (((/* implicit */int) (short)9505)) : (((/* implicit */int) (unsigned short)43692))))));
            /* LoopNest 2 */
            for (long long int i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                for (unsigned short i_3 = 0; i_3 < 10; i_3 += 1) 
                {
                    {
                        arr_12 [i_0] [i_1] [i_2] [i_3] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)(-32767 - 1)))))) ? (arr_11 [i_0] [i_1] [i_1] [i_2] [i_3]) : ((~(var_6)))));
                        var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) (unsigned short)21843)) : (((/* implicit */int) (unsigned short)51338))));
                    }
                } 
            } 
            arr_13 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) 0ULL);
        }
        var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) ((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (arr_11 [i_0] [i_0] [i_0] [i_0] [i_0]) : (var_6))))));
    }
    /* vectorizable */
    for (int i_4 = 1; i_4 < 22; i_4 += 3) /* same iter space */
    {
        /* LoopNest 3 */
        for (long long int i_5 = 0; i_5 < 23; i_5 += 3) 
        {
            for (long long int i_6 = 0; i_6 < 23; i_6 += 4) 
            {
                for (unsigned short i_7 = 0; i_7 < 23; i_7 += 3) 
                {
                    {
                        var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) (-(var_11))))));
                        var_20 = ((((/* implicit */int) (short)-1)) > (((/* implicit */int) (unsigned short)14197)));
                    }
                } 
            } 
        } 
        arr_23 [i_4] = ((/* implicit */short) ((18446744073709551615ULL) & (((/* implicit */unsigned long long int) var_13))));
    }
    /* vectorizable */
    for (int i_8 = 1; i_8 < 22; i_8 += 3) /* same iter space */
    {
        var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) ((((/* implicit */int) arr_19 [i_8 - 1])) << (((/* implicit */int) arr_19 [i_8 + 1])))))));
        arr_27 [i_8] [i_8] = ((/* implicit */_Bool) ((var_8) % (arr_20 [i_8] [i_8] [i_8])));
        arr_28 [i_8] [i_8] = ((/* implicit */unsigned char) (-(((long long int) (unsigned short)51338))));
    }
    var_22 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (~(((/* implicit */int) var_1))))), (((min((((/* implicit */long long int) 1607376152)), (9223372036854775807LL))) >> (((var_7) - (2929918239106867960ULL)))))));
}
