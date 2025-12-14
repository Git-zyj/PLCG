/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199274
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199274 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199274
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
    var_19 = ((((/* implicit */int) (signed char)90)) == (((/* implicit */int) (_Bool)0)));
    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */int) (_Bool)0)) & (((/* implicit */int) (unsigned char)0)))))) ? (((((((/* implicit */int) (short)-11436)) + (2147483647))) >> (((8472241035268728607ULL) - (8472241035268728597ULL))))) : (((/* implicit */int) (unsigned short)28986))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((8472241035268728607ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-11436))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) max((8472241035268728607ULL), (((/* implicit */unsigned long long int) var_2)))))))));
        var_22 = ((/* implicit */long long int) 8472241035268728602ULL);
    }
    var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) (unsigned char)20))));
    /* LoopSeq 2 */
    for (long long int i_1 = 1; i_1 < 10; i_1 += 1) 
    {
        var_24 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */int) (unsigned short)25378)), ((((_Bool)1) ? (((/* implicit */int) arr_2 [i_1] [i_1])) : (((/* implicit */int) arr_3 [i_1]))))))) ? ((+((+(((/* implicit */int) arr_3 [i_1])))))) : (((((/* implicit */_Bool) min((arr_3 [i_1]), (arr_2 [i_1] [i_1])))) ? (((/* implicit */int) ((unsigned short) arr_0 [i_1]))) : (((((/* implicit */_Bool) arr_2 [i_1] [i_1])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_0 [i_1]))))))));
        /* LoopNest 2 */
        for (unsigned short i_2 = 0; i_2 < 11; i_2 += 2) 
        {
            for (unsigned int i_3 = 0; i_3 < 11; i_3 += 4) 
            {
                {
                    var_25 = ((((/* implicit */_Bool) (signed char)26)) ? (((/* implicit */unsigned long long int) 2361844448753921237LL)) : (8472241035268728607ULL));
                    arr_11 [i_1] [i_2] [i_3] = ((/* implicit */unsigned short) 1668067674);
                }
            } 
        } 
        arr_12 [i_1] = ((/* implicit */unsigned short) var_18);
        /* LoopNest 2 */
        for (long long int i_4 = 2; i_4 < 9; i_4 += 2) 
        {
            for (short i_5 = 0; i_5 < 11; i_5 += 2) 
            {
                {
                    arr_19 [i_5] [i_4] [i_1] = ((/* implicit */int) min((max((((/* implicit */unsigned long long int) -2361844448753921237LL)), (arr_8 [i_1 - 1]))), (max((arr_8 [i_1 + 1]), (arr_8 [i_1 + 1])))));
                    var_26 = ((signed char) arr_13 [i_5] [i_4] [i_1]);
                    arr_20 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_15)) ? (((((/* implicit */_Bool) (short)-11436)) ? (9974503038440823008ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)167)))));
                }
            } 
        } 
    }
    for (unsigned long long int i_6 = 1; i_6 < 12; i_6 += 4) 
    {
        var_27 = ((/* implicit */unsigned int) arr_22 [i_6]);
        var_28 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) (unsigned short)10638)) ? (9974503038440823009ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)255))))), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 8472241035268728602ULL)) ? (var_10) : (((/* implicit */int) (unsigned short)13620)))) & (-236611374))))));
        arr_23 [i_6] = ((/* implicit */unsigned int) (~(((((/* implicit */int) (unsigned short)25378)) + (((/* implicit */int) (signed char)79))))));
        /* LoopNest 2 */
        for (unsigned short i_7 = 0; i_7 < 13; i_7 += 4) 
        {
            for (unsigned long long int i_8 = 0; i_8 < 13; i_8 += 1) 
            {
                {
                    var_29 = ((/* implicit */unsigned int) (((+(((/* implicit */int) ((unsigned short) -1754291572))))) | (((/* implicit */int) arr_25 [i_6] [i_7]))));
                    var_30 = ((/* implicit */unsigned char) 9974503038440823014ULL);
                }
            } 
        } 
    }
}
