/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44901
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44901 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44901
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
    var_16 = ((/* implicit */short) ((((/* implicit */long long int) var_3)) & (((((/* implicit */_Bool) 4048496519U)) ? (3147079849180137163LL) : (((/* implicit */long long int) ((/* implicit */int) (short)32764)))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                for (unsigned char i_3 = 0; i_3 < 18; i_3 += 3) 
                {
                    {
                        var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_0] [i_3])) ? (-3147079849180137169LL) : (((/* implicit */long long int) var_7))))) ? (min((((/* implicit */unsigned int) arr_8 [(unsigned short)4] [(unsigned char)0] [(unsigned short)4])), (3757689056U))) : (var_1)))) | (((((/* implicit */_Bool) 112293249880668525LL)) ? ((~(3147079849180137163LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0 + 2] [i_0 + 2])))))));
                        var_18 -= ((/* implicit */unsigned short) ((unsigned long long int) ((arr_10 [i_0 - 1] [i_0] [i_0] [i_0]) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 2]))))));
                        arr_12 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((1152921504338411520ULL) == (0ULL)));
                        var_19 = ((/* implicit */unsigned short) ((max((11969775278848300317ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)32746)) ? (2652546861U) : (4294967295U)))))) % (((((/* implicit */_Bool) ((((/* implicit */_Bool) 2070469686U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)30450))) : (var_14)))) ? (((/* implicit */unsigned long long int) var_13)) : (((((/* implicit */_Bool) arr_2 [i_0 + 2] [i_0 + 2])) ? (((/* implicit */unsigned long long int) 2130706432U)) : (var_12)))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 4 */
        for (unsigned short i_4 = 0; i_4 < 18; i_4 += 1) /* same iter space */
        {
            arr_17 [i_4] = ((/* implicit */short) ((unsigned long long int) var_9));
            arr_18 [i_4] = ((/* implicit */unsigned int) max((((unsigned long long int) (signed char)127)), (min((((/* implicit */unsigned long long int) var_0)), (min((((/* implicit */unsigned long long int) var_8)), (15ULL)))))));
        }
        for (unsigned short i_5 = 0; i_5 < 18; i_5 += 1) /* same iter space */
        {
            var_20 = ((/* implicit */unsigned long long int) (~(var_2)));
            var_21 = arr_15 [i_0] [i_0] [(unsigned short)12];
        }
        /* vectorizable */
        for (unsigned short i_6 = 0; i_6 < 18; i_6 += 1) /* same iter space */
        {
            var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((long long int) var_2))) ? (((unsigned long long int) var_0)) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_0 + 1] [7LL] [i_6])))));
            var_23 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)17557)) ? ((~(((/* implicit */int) var_8)))) : (((/* implicit */int) (signed char)-107))));
        }
        for (unsigned long long int i_7 = 0; i_7 < 18; i_7 += 1) 
        {
            /* LoopSeq 1 */
            for (signed char i_8 = 0; i_8 < 18; i_8 += 3) 
            {
                arr_29 [i_8] [i_8] = ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_15 [i_8] [i_7] [i_8])) : (((/* implicit */int) arr_26 [i_0] [i_0 - 1]))))) ^ (((4294967295U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65533))))));
                var_24 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (+((-(((/* implicit */int) arr_22 [5ULL]))))))) + (max((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_2 [i_7] [i_0])), (var_0)))), (((unsigned long long int) arr_3 [i_0] [12U] [i_8]))))));
                arr_30 [i_8] [i_8] [i_8] [i_8] = ((/* implicit */unsigned char) var_2);
                var_25 ^= ((/* implicit */short) var_8);
                /* LoopNest 2 */
                for (unsigned short i_9 = 1; i_9 < 17; i_9 += 4) 
                {
                    for (short i_10 = 0; i_10 < 18; i_10 += 2) 
                    {
                        {
                            var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) 5543506214492811836ULL))));
                            var_27 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((short) arr_25 [i_0] [i_0 + 2] [(unsigned short)16])))));
                            var_28 -= ((/* implicit */short) 3147079849180137155LL);
                        }
                    } 
                } 
            }
            arr_37 [(unsigned short)1] [i_0] = ((/* implicit */signed char) (+((-(((/* implicit */int) (!(((/* implicit */_Bool) arr_23 [i_7])))))))));
        }
        var_29 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)41663))) % ((((!(((/* implicit */_Bool) 17338921110895436092ULL)))) ? (min((((/* implicit */unsigned long long int) (short)-27862)), (5894746665316452162ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)80)))))));
        var_30 = ((/* implicit */unsigned long long int) (-(var_5)));
    }
}
