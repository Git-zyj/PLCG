/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221910
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
    var_13 = var_0;
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        var_14 &= ((/* implicit */short) -6347291968497024193LL);
        arr_2 [i_0] = ((/* implicit */int) (~(-6347291968497024193LL)));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 1; i_1 < 20; i_1 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_2 = 2; i_2 < 22; i_2 += 2) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 3) 
            {
                for (long long int i_4 = 1; i_4 < 21; i_4 += 4) 
                {
                    {
                        arr_12 [i_1] [i_1] [i_3] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_4 - 1] [i_4 - 1] [i_1 - 1] [i_2 - 1] [i_4 + 2]))) < (var_1)));
                        arr_13 [i_1] [i_2] [i_2 - 1] = ((/* implicit */unsigned short) ((arr_11 [i_4] [i_3] [(_Bool)1] [i_1 + 2] [i_1 + 2]) || (((/* implicit */_Bool) var_12))));
                    }
                } 
            } 
        } 
        arr_14 [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)18336)) % (((/* implicit */int) (unsigned char)47))));
    }
    for (unsigned char i_5 = 4; i_5 < 12; i_5 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_6 = 4; i_6 < 12; i_6 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned int i_7 = 0; i_7 < 14; i_7 += 2) 
            {
                for (unsigned short i_8 = 0; i_8 < 14; i_8 += 2) 
                {
                    {
                        arr_26 [i_8] [i_7] [i_6 - 4] [i_5] = ((/* implicit */unsigned short) ((unsigned int) 4194176LL));
                        /* LoopSeq 1 */
                        for (long long int i_9 = 0; i_9 < 14; i_9 += 4) 
                        {
                            var_15 = 4194176LL;
                            var_16 = ((/* implicit */long long int) var_8);
                        }
                        var_17 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (+(((var_7) - (var_9)))))), (((((/* implicit */_Bool) (+(((/* implicit */int) var_5))))) ? ((~(5161721172588522790ULL))) : (((/* implicit */unsigned long long int) (+(var_7))))))));
                    }
                } 
            } 
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned long long int i_10 = 0; i_10 < 14; i_10 += 4) 
            {
                var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (arr_5 [i_10]) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_11)))))));
                arr_31 [i_5] [i_5 - 3] [i_5] |= ((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_2)) ? (var_2) : (-4194176LL)))));
            }
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                var_19 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) (unsigned short)55690)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_11] [i_6]))) : ((+(var_10)))));
                var_20 -= ((/* implicit */signed char) 1048575LL);
            }
        }
        arr_34 [i_5] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_12))));
    }
    /* LoopNest 3 */
    for (unsigned short i_12 = 0; i_12 < 20; i_12 += 2) 
    {
        for (unsigned short i_13 = 0; i_13 < 20; i_13 += 2) 
        {
            for (unsigned char i_14 = 0; i_14 < 20; i_14 += 2) 
            {
                {
                    arr_44 [i_12] [i_13] [i_13] = ((/* implicit */unsigned short) var_2);
                    var_21 = ((/* implicit */unsigned long long int) (-(-6347291968497024193LL)));
                }
            } 
        } 
    } 
}
