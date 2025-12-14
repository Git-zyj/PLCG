/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218049
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218049 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218049
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
    for (short i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (short i_1 = 2; i_1 < 13; i_1 += 4) 
        {
            {
                var_10 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) (unsigned short)25060)) : (((((_Bool) arr_1 [(short)15])) ? (((/* implicit */int) ((short) -5050612627513277737LL))) : (((/* implicit */int) ((12ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)8192))))))))));
                var_11 = ((/* implicit */short) max((var_11), (((/* implicit */short) max(((+(((/* implicit */int) var_4)))), (((((/* implicit */_Bool) arr_1 [i_1 - 1])) ? (((/* implicit */int) (short)3584)) : (((/* implicit */int) (short)9)))))))));
                /* LoopSeq 2 */
                for (unsigned int i_2 = 0; i_2 < 16; i_2 += 1) 
                {
                    var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) ((((/* implicit */_Bool) min(((unsigned short)45390), ((unsigned short)45390)))) ? (((/* implicit */int) arr_4 [i_1 - 1])) : (((/* implicit */int) var_6)))))));
                    var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((max((var_5), (((/* implicit */unsigned short) (short)16325)))), ((unsigned short)57344)))) ? (((/* implicit */int) (short)16329)) : (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) var_7))))))));
                }
                for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                {
                    var_14 = ((/* implicit */unsigned long long int) ((unsigned int) arr_3 [i_0]));
                    var_15 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_10 [i_1 - 1] [i_3] [i_3 - 1])))) ? ((+(((/* implicit */int) ((unsigned char) var_6))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)8192)))))));
                    var_16 = ((/* implicit */unsigned int) ((((arr_4 [i_1 + 1]) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned short)45374)))) << (((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_0] [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (3475510323U)))) | (max((((/* implicit */unsigned long long int) arr_9 [i_0] [i_1] [i_3] [i_0])), (18446744073709551614ULL))))) - (18446744073709551607ULL)))));
                }
                arr_11 [i_0] [i_0] [i_1 + 3] = ((/* implicit */int) ((((/* implicit */_Bool) (+(arr_5 [i_0] [0ULL] [i_1 + 1] [i_1])))) ? (((/* implicit */unsigned long long int) ((var_1) ? (((/* implicit */long long int) ((/* implicit */int) min(((short)(-32767 - 1)), ((short)13400))))) : (min((var_2), (((/* implicit */long long int) (short)-16329))))))) : (((15ULL) + (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)-16316)))))))));
                var_17 *= ((/* implicit */unsigned long long int) var_8);
            }
        } 
    } 
    /* LoopSeq 4 */
    for (short i_4 = 1; i_4 < 10; i_4 += 4) /* same iter space */
    {
        var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-16))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_8)), (0ULL)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 3046901824125070308ULL)) ? (((/* implicit */int) (signed char)4)) : (arr_2 [i_4] [i_4])))) : (arr_6 [i_4 + 1] [i_4 - 1])))) : (18446744073709551612ULL)));
        arr_14 [i_4 + 1] [i_4] = ((/* implicit */unsigned int) max(((~(((/* implicit */int) var_0)))), (((((/* implicit */_Bool) (-(((/* implicit */int) var_0))))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_6)))) : (((/* implicit */int) var_5))))));
        var_19 = ((/* implicit */short) (~(min((((/* implicit */unsigned int) var_8)), (arr_12 [i_4 - 1] [i_4])))));
    }
    for (short i_5 = 1; i_5 < 10; i_5 += 4) /* same iter space */
    {
        arr_19 [i_5] = ((/* implicit */long long int) max((max((((/* implicit */unsigned long long int) min(((signed char)21), (((/* implicit */signed char) var_1))))), (6ULL))), (((((/* implicit */_Bool) ((short) 18446744073709551596ULL))) ? (max((((/* implicit */unsigned long long int) (unsigned short)8169)), (12ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)57360)) ? (((/* implicit */int) (short)11)) : (((/* implicit */int) var_6)))))))));
        arr_20 [10ULL] [10ULL] = ((/* implicit */int) min(((short)-32449), ((short)-13754)));
    }
    /* vectorizable */
    for (short i_6 = 1; i_6 < 10; i_6 += 4) /* same iter space */
    {
        var_20 = ((/* implicit */signed char) (!(((var_3) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))));
        var_21 |= ((/* implicit */int) (~((~(2843773838015221952LL)))));
    }
    for (short i_7 = 1; i_7 < 10; i_7 += 4) /* same iter space */
    {
        var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(((long long int) (_Bool)1))))))))));
        arr_27 [(short)2] = ((/* implicit */_Bool) (~((-(((/* implicit */int) (short)16329))))));
        /* LoopNest 2 */
        for (short i_8 = 3; i_8 < 11; i_8 += 3) 
        {
            for (unsigned long long int i_9 = 0; i_9 < 13; i_9 += 4) 
            {
                {
                    var_23 += ((/* implicit */_Bool) (short)0);
                    var_24 = ((/* implicit */long long int) (+(min((((/* implicit */unsigned int) (_Bool)1)), (2012091080U)))));
                }
            } 
        } 
    }
    /* LoopNest 2 */
    for (short i_10 = 0; i_10 < 12; i_10 += 1) 
    {
        for (short i_11 = 0; i_11 < 12; i_11 += 4) 
        {
            {
                arr_40 [i_10] [i_10] [i_11] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (short)-8018)) ? (((/* implicit */unsigned int) 1962303338)) : (2481757223U))) / (((/* implicit */unsigned int) (+(((/* implicit */int) arr_25 [(_Bool)1])))))))) ? ((~(((((/* implicit */int) (short)8128)) ^ (((/* implicit */int) var_0)))))) : ((-(((/* implicit */int) min(((short)8129), (var_4))))))));
                var_25 = (-(((((/* implicit */int) var_5)) | (((/* implicit */int) var_1)))));
            }
        } 
    } 
}
