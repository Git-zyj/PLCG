/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27535
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27535 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27535
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
    var_18 |= ((/* implicit */unsigned short) (((_Bool)0) ? (((/* implicit */int) (unsigned char)217)) : (((/* implicit */int) (unsigned char)247))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */short) -8277519962126368776LL);
        arr_3 [i_0] = ((/* implicit */int) (((~(478640338543083677ULL))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_10))))));
        var_19 = ((/* implicit */_Bool) 18119832983443819140ULL);
    }
    for (short i_1 = 1; i_1 < 22; i_1 += 1) 
    {
        var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) || ((_Bool)0)))))));
        arr_6 [i_1] = ((/* implicit */signed char) (_Bool)1);
        /* LoopNest 2 */
        for (unsigned char i_2 = 0; i_2 < 25; i_2 += 3) 
        {
            for (int i_3 = 0; i_3 < 25; i_3 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 1; i_4 < 24; i_4 += 3) 
                    {
                        for (unsigned long long int i_5 = 0; i_5 < 25; i_5 += 2) 
                        {
                            {
                                var_21 *= ((/* implicit */_Bool) ((((/* implicit */long long int) ((3866594751U) | (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned short)62733), (var_0)))))))) & (-6385399128248122203LL)));
                                var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((var_8) & (((/* implicit */long long int) ((/* implicit */int) (short)-16090)))))))) ? ((~(((/* implicit */int) (!(var_1)))))) : ((~(((/* implicit */int) ((var_8) != (((/* implicit */long long int) ((/* implicit */int) (signed char)-23))))))))));
                            }
                        } 
                    } 
                    var_23 -= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)187)))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 2612189763022597140ULL)) ? (((/* implicit */int) (unsigned short)2800)) : (((/* implicit */int) (short)-4058))))) ? (arr_9 [(_Bool)0] [i_3]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (3674159038U))))))));
                    arr_16 [i_2] [i_2] [i_3] = ((/* implicit */unsigned long long int) 1322322083U);
                }
            } 
        } 
        arr_17 [i_1 + 3] |= ((/* implicit */unsigned short) (((+(min((-2147483626), (((/* implicit */int) (signed char)-24)))))) % (((((/* implicit */_Bool) (unsigned short)62734)) ? (((/* implicit */int) (unsigned char)145)) : (((/* implicit */int) (_Bool)1))))));
        arr_18 [i_1] = ((((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) (unsigned short)60)) ? (((/* implicit */int) (signed char)107)) : (((/* implicit */int) (_Bool)1))))))) - (min((arr_15 [i_1 - 1] [(signed char)18] [(signed char)18] [i_1 + 1]), (arr_15 [i_1 + 3] [2LL] [2LL] [i_1 + 2]))));
    }
    for (long long int i_6 = 0; i_6 < 18; i_6 += 2) 
    {
        var_24 = ((/* implicit */short) ((min((((/* implicit */unsigned long long int) (short)-32490)), (((((/* implicit */_Bool) (signed char)3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32760))) : (7075501377187230519ULL))))) | (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_2)))))));
        arr_22 [i_6] = ((/* implicit */_Bool) 2972645213U);
        arr_23 [i_6] = ((/* implicit */short) var_10);
        arr_24 [i_6] [i_6] = ((/* implicit */signed char) ((((((/* implicit */_Bool) (short)-32740)) || (((/* implicit */_Bool) var_13)))) ? (((((/* implicit */_Bool) -4284419923327207138LL)) ? (((/* implicit */unsigned long long int) 1379526287)) : (arr_20 [i_6]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)8))))) ? (1322322071U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1)))))))));
    }
    for (long long int i_7 = 0; i_7 < 23; i_7 += 3) 
    {
        var_25 -= ((/* implicit */_Bool) ((long long int) (!(((/* implicit */_Bool) -9223372036854775807LL)))));
        var_26 = ((/* implicit */long long int) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32500))) % (18446744073709551615ULL)))));
    }
}
