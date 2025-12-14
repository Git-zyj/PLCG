/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208778
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208778 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208778
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
    var_12 = ((/* implicit */unsigned int) (((_Bool)1) ? (((((/* implicit */long long int) ((/* implicit */int) var_3))) | (max((-3995236018815008676LL), (((/* implicit */long long int) (_Bool)1)))))) : (((/* implicit */long long int) ((/* implicit */int) var_1)))));
    var_13 = ((/* implicit */int) max((((/* implicit */long long int) (-((+(((/* implicit */int) (signed char)4))))))), (var_4)));
    var_14 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) ((short) var_5))) + (((((/* implicit */int) (short)24370)) + (((/* implicit */int) var_2))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (var_4)));
    /* LoopSeq 4 */
    for (signed char i_0 = 1; i_0 < 9; i_0 += 3) /* same iter space */
    {
        arr_4 [i_0] = ((/* implicit */_Bool) max((min(((unsigned char)146), (min((arr_0 [i_0]), ((unsigned char)94))))), (var_11)));
        arr_5 [i_0] = ((/* implicit */signed char) ((_Bool) ((((/* implicit */_Bool) 24)) ? (((int) arr_0 [i_0])) : (((var_7) ? (-269068129) : (((/* implicit */int) (signed char)124)))))));
        /* LoopNest 2 */
        for (long long int i_1 = 2; i_1 < 9; i_1 += 1) 
        {
            for (unsigned int i_2 = 2; i_2 < 9; i_2 += 1) 
            {
                {
                    arr_11 [i_1] [i_1] = ((/* implicit */_Bool) arr_7 [i_0]);
                    var_15 = ((/* implicit */long long int) max((var_15), (arr_3 [i_0])));
                }
            } 
        } 
        var_16 = ((/* implicit */unsigned long long int) ((unsigned char) ((unsigned short) arr_2 [i_0 + 1])));
        var_17 ^= ((/* implicit */unsigned int) max((((/* implicit */int) arr_0 [i_0])), ((+((-(((/* implicit */int) (_Bool)1))))))));
    }
    /* vectorizable */
    for (signed char i_3 = 1; i_3 < 9; i_3 += 3) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned int) var_4);
        var_19 = ((/* implicit */short) 171669363694680654LL);
    }
    for (signed char i_4 = 0; i_4 < 10; i_4 += 1) 
    {
        var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)59264)) ? (((/* implicit */int) arr_10 [2ULL] [i_4] [i_4] [(unsigned char)4])) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */int) (!((_Bool)1)))) * (((/* implicit */int) ((unsigned char) arr_10 [i_4] [i_4] [8U] [i_4]))))) : (((/* implicit */int) arr_1 [(signed char)8] [(_Bool)1]))));
        var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) (((+(((/* implicit */int) arr_6 [(unsigned short)8] [i_4])))) * (((/* implicit */int) (short)-29968))))) || (((/* implicit */_Bool) arr_6 [i_4] [8]))));
        arr_17 [i_4] [i_4] = ((/* implicit */unsigned long long int) var_5);
    }
    /* vectorizable */
    for (short i_5 = 0; i_5 < 12; i_5 += 1) 
    {
        arr_20 [i_5] [i_5] = ((/* implicit */_Bool) var_10);
        var_22 = ((/* implicit */short) (_Bool)1);
        /* LoopSeq 3 */
        for (signed char i_6 = 2; i_6 < 11; i_6 += 1) 
        {
            var_23 = ((/* implicit */_Bool) (short)(-32767 - 1));
            /* LoopNest 2 */
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                for (unsigned short i_8 = 1; i_8 < 10; i_8 += 3) 
                {
                    {
                        arr_27 [i_7] [i_7] [9U] = ((/* implicit */signed char) ((_Bool) arr_24 [i_7] [i_7] [i_6 - 1]));
                        var_24 = ((/* implicit */signed char) (+(((arr_19 [i_5] [i_5]) ? (((/* implicit */int) arr_24 [i_7] [2ULL] [i_7])) : (((/* implicit */int) (signed char)-11))))));
                    }
                } 
            } 
        }
        for (short i_9 = 1; i_9 < 11; i_9 += 2) 
        {
            var_25 = ((/* implicit */_Bool) (((((~(((/* implicit */int) (signed char)4)))) + (2147483647))) >> ((+(((/* implicit */int) arr_19 [i_5] [i_9]))))));
            arr_31 [i_5] |= ((/* implicit */short) (((+(((/* implicit */int) (signed char)-10)))) / (((/* implicit */int) (short)-1))));
            var_26 = ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))));
            var_27 = ((/* implicit */int) ((((/* implicit */int) var_3)) <= (((/* implicit */int) arr_22 [i_9 + 1] [i_9] [i_9]))));
            var_28 = ((/* implicit */unsigned int) ((long long int) 11245681830865972337ULL));
        }
        for (signed char i_10 = 1; i_10 < 11; i_10 += 1) 
        {
            arr_36 [i_5] [i_10] [i_10] &= ((/* implicit */unsigned long long int) (((+(((/* implicit */int) arr_21 [i_5])))) / (((/* implicit */int) arr_30 [i_10 + 1] [i_10 + 1] [i_10]))));
            arr_37 [i_5] = ((/* implicit */short) ((((/* implicit */int) arr_24 [4ULL] [8] [i_10 + 1])) ^ (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) var_7))))));
            /* LoopSeq 1 */
            for (unsigned long long int i_11 = 2; i_11 < 8; i_11 += 1) 
            {
                arr_40 [10ULL] [(_Bool)0] [i_10] [i_11] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_23 [i_10 + 1] [i_10 + 1] [i_10 + 1] [i_10 + 1])) / (((/* implicit */int) (unsigned short)33012))));
                arr_41 [i_5] [i_10] = ((/* implicit */_Bool) (unsigned char)100);
                var_29 = ((/* implicit */unsigned short) ((((/* implicit */int) var_6)) <= (((((/* implicit */int) (signed char)63)) - (((/* implicit */int) (unsigned short)33007))))));
            }
            arr_42 [i_5] [(signed char)8] [i_5] &= ((/* implicit */unsigned char) arr_24 [(unsigned char)8] [6ULL] [i_5]);
            var_30 = ((/* implicit */unsigned short) (!(arr_30 [i_10 - 1] [i_10] [i_10 - 1])));
        }
    }
}
