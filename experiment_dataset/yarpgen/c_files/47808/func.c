/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47808
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47808 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47808
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            var_19 = max((var_16), (((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)166)) ? (var_17) : (((/* implicit */long long int) ((/* implicit */int) var_8))))))))));
            arr_6 [i_0] &= ((/* implicit */unsigned long long int) (~((~(((/* implicit */int) max((((/* implicit */unsigned char) var_10)), ((unsigned char)89))))))));
        }
        /* LoopSeq 1 */
        for (unsigned char i_2 = 0; i_2 < 23; i_2 += 1) 
        {
            var_20 ^= ((/* implicit */unsigned char) max((((/* implicit */unsigned short) arr_5 [i_0])), (var_5)));
            arr_9 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_3 [(_Bool)1])) ? (((/* implicit */int) ((((/* implicit */long long int) ((var_10) ? (((/* implicit */int) (unsigned char)172)) : (((/* implicit */int) (unsigned char)177))))) != (2705747315028052126LL)))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_0)), (var_14)))) ? (((((/* implicit */_Bool) (unsigned char)90)) ? (((/* implicit */int) (unsigned char)166)) : (((/* implicit */int) arr_4 [i_0])))) : (((/* implicit */int) arr_4 [i_0]))))));
            /* LoopSeq 2 */
            for (unsigned char i_3 = 0; i_3 < 23; i_3 += 4) 
            {
                arr_14 [i_0] [i_0] [i_2] = ((/* implicit */unsigned char) min((((((/* implicit */int) ((((/* implicit */int) (unsigned char)172)) > (((/* implicit */int) arr_10 [i_0] [i_0] [i_2]))))) >> (((((((/* implicit */int) (unsigned char)90)) ^ (((/* implicit */int) (_Bool)0)))) - (70))))), (((/* implicit */int) ((((/* implicit */int) (unsigned char)166)) > (((/* implicit */int) (unsigned char)90)))))));
                arr_15 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((((/* implicit */_Bool) ((arr_8 [i_3]) ? (((/* implicit */int) (unsigned char)92)) : (((/* implicit */int) (unsigned char)89))))) ? (max((((/* implicit */unsigned long long int) (_Bool)1)), (5ULL))) : (((((/* implicit */_Bool) arr_4 [i_2])) ? (arr_13 [1ULL] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [18ULL] [18ULL] [18ULL] [i_2])) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)154))))) : (4294967294U))))));
                arr_16 [i_2] = ((/* implicit */unsigned short) (-(-1325425756)));
            }
            for (int i_4 = 0; i_4 < 23; i_4 += 4) 
            {
                /* LoopSeq 2 */
                for (int i_5 = 2; i_5 < 21; i_5 += 2) 
                {
                    var_21 -= ((/* implicit */unsigned long long int) var_15);
                    var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) ? (18446744073709551610ULL) : (3ULL))))));
                }
                /* vectorizable */
                for (long long int i_6 = 0; i_6 < 23; i_6 += 4) 
                {
                    var_23 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)77))))) || (((/* implicit */_Bool) arr_24 [i_0] [i_2] [i_4] [i_0] [i_6]))));
                    arr_27 [i_0] [i_2] [i_4] [i_4] [i_6] [i_6] |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((var_17) | (((/* implicit */long long int) 1883137300U))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) var_15))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 9ULL)))))));
                    arr_28 [(unsigned short)17] [i_2] [i_4] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (((arr_3 [i_6]) << (((((/* implicit */int) var_2)) - (20738)))))));
                }
                var_24 = ((((/* implicit */_Bool) arr_13 [i_2] [i_2])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1325425756)) ? ((+(((/* implicit */int) var_15)))) : (((((/* implicit */int) var_4)) | (((/* implicit */int) var_11))))))) : (arr_19 [i_0] [i_2]));
            }
        }
    }
    var_25 = ((((/* implicit */_Bool) (-(((/* implicit */int) max((var_10), (var_3))))))) ? (((/* implicit */int) var_7)) : (((((/* implicit */_Bool) 1325425756)) ? (((((/* implicit */int) var_0)) & (((/* implicit */int) (signed char)-43)))) : (((/* implicit */int) var_3)))));
    var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */signed char) var_3)), ((signed char)-105)))) ? ((~(((/* implicit */int) var_11)))) : ((+(((/* implicit */int) var_7))))))) ? (((min((((/* implicit */unsigned long long int) (unsigned char)74)), (var_9))) >> ((((((_Bool)0) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_7)))) - (56933))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) 7830116025349625214LL))) ? (max((3603662906974479527LL), (((/* implicit */long long int) var_7)))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
}
