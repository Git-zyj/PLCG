/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23510
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23510 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23510
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
    var_15 = ((/* implicit */signed char) var_12);
    var_16 = ((/* implicit */signed char) var_13);
    /* LoopNest 3 */
    for (long long int i_0 = 2; i_0 < 13; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (unsigned int i_2 = 1; i_2 < 13; i_2 += 3) 
            {
                {
                    var_17 |= ((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) ((signed char) ((69805794224242688LL) + (((/* implicit */long long int) ((/* implicit */int) (signed char)0))))))), (((unsigned char) (signed char)0))));
                    var_18 = ((/* implicit */unsigned int) (+(((((/* implicit */unsigned long long int) 0U)) | (3230555654223258354ULL)))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        arr_11 [i_0] [i_0] [i_0] [i_3] [i_3] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)12)) ? (((/* implicit */int) (short)-8393)) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) 0U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)1))) : (4ULL))) : ((+(18446744073709551612ULL)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)1)) ? (((/* implicit */int) (signed char)3)) : (((/* implicit */int) (signed char)7))))) || (((/* implicit */_Bool) (unsigned short)55188))))) : (((((/* implicit */_Bool) max((2147483647), (((/* implicit */int) (_Bool)1))))) ? ((+(((/* implicit */int) (signed char)0)))) : (((/* implicit */int) ((11) <= (((/* implicit */int) (unsigned char)0)))))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned char i_4 = 0; i_4 < 15; i_4 += 3) 
                        {
                            arr_14 [i_1] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (signed char)-11)))) >= (20ULL)));
                            var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((((/* implicit */_Bool) (short)7128)) ? (((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (signed char)-3)))) : (((/* implicit */int) ((unsigned short) -2083054695))))))));
                            var_20 = ((/* implicit */_Bool) (short)31786);
                        }
                        for (int i_5 = 1; i_5 < 14; i_5 += 3) 
                        {
                            var_21 = (+(((/* implicit */int) ((unsigned short) (_Bool)1))));
                            var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) ((int) ((((((/* implicit */_Bool) (unsigned char)127)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-31))) : (18446744073709551586ULL))) | (((/* implicit */unsigned long long int) ((2012331976) | (((/* implicit */int) (signed char)57)))))))))));
                            var_23 -= ((/* implicit */int) ((short) (signed char)-31));
                        }
                        arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [i_1] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)49993)) ? (4905032342835766847LL) : (9223372036854775795LL)))) || (((((/* implicit */_Bool) 6059293909698341877ULL)) || (((/* implicit */_Bool) (unsigned short)25594))))))), (max((((((/* implicit */_Bool) (signed char)23)) ? (20ULL) : (48ULL))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 1588070903U)))))))));
                        arr_18 [i_0] [i_1] [i_0] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) (unsigned char)213))) ? (((((/* implicit */_Bool) 18446744073709551602ULL)) ? (21ULL) : (((/* implicit */unsigned long long int) 1840286118U)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)8)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)5108)) || (((/* implicit */_Bool) 1926114246)))))) : (((((/* implicit */_Bool) 20ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)15152)))))) : (((long long int) (signed char)24)))));
                    }
                    var_24 = ((/* implicit */unsigned char) ((((/* implicit */int) max((((short) (unsigned short)39571)), (((/* implicit */short) (signed char)30))))) / ((+(((/* implicit */int) (signed char)30))))));
                }
            } 
        } 
    } 
}
