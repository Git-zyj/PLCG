/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196056
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196056 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196056
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
    var_10 = ((/* implicit */unsigned long long int) -1346834691);
    /* LoopSeq 3 */
    for (long long int i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1346834707)) ? (((/* implicit */int) (unsigned char)13)) : (1346834690)))) ? (((/* implicit */int) (unsigned char)19)) : (((/* implicit */int) ((unsigned short) 4539628424389459968LL)))))) < (max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (unsigned char)13))))));
        var_11 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_0))));
        arr_3 [i_0] = ((/* implicit */_Bool) 1346834691);
        arr_4 [i_0] [(short)21] = ((/* implicit */unsigned short) max((((/* implicit */long long int) (~(((/* implicit */int) arr_1 [i_0]))))), (((arr_1 [i_0]) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : (var_9)))));
        arr_5 [i_0] = ((/* implicit */long long int) arr_0 [i_0 + 1] [i_0]);
    }
    for (unsigned char i_1 = 0; i_1 < 19; i_1 += 4) 
    {
        arr_10 [i_1] = arr_6 [i_1];
        arr_11 [i_1] = ((/* implicit */unsigned char) ((min((((/* implicit */long long int) min((879928641), (((/* implicit */int) (unsigned char)13))))), (max((((/* implicit */long long int) (short)-3907)), (4539628424389459968LL))))) <= (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_1])))));
        var_12 = ((((/* implicit */_Bool) min((-4539628424389459969LL), (-4539628424389459969LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (-4539628424389459969LL) : (-4539628424389459939LL)))))))) : (var_7));
        arr_12 [i_1] = ((/* implicit */signed char) var_7);
    }
    for (int i_2 = 0; i_2 < 10; i_2 += 3) 
    {
        /* LoopNest 3 */
        for (short i_3 = 0; i_3 < 10; i_3 += 1) 
        {
            for (int i_4 = 2; i_4 < 8; i_4 += 2) 
            {
                for (signed char i_5 = 0; i_5 < 10; i_5 += 2) 
                {
                    {
                        var_13 = arr_20 [i_2];
                        arr_23 [i_3] [i_2] = ((/* implicit */unsigned long long int) arr_19 [i_4 + 1] [i_4 + 2] [i_4 + 1]);
                    }
                } 
            } 
        } 
        arr_24 [i_2] = ((/* implicit */unsigned long long int) 1346834691);
        var_14 = ((/* implicit */int) (!(((/* implicit */_Bool) 1549685974))));
    }
    var_15 = ((/* implicit */short) var_2);
    var_16 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((var_2) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)13))))) ? (((/* implicit */long long int) (+(0U)))) : (max((((/* implicit */long long int) (short)-27296)), (7165066223121820178LL)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (4539628424389459969LL) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) var_6)) : (var_0))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))));
    var_17 = 6476709297542661682ULL;
}
