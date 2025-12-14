/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239519
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
    var_20 = ((/* implicit */int) ((((/* implicit */_Bool) (short)0)) || (((/* implicit */_Bool) (short)-1))));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_2 = 1; i_2 < 14; i_2 += 2) 
                {
                    for (int i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        for (short i_4 = 1; i_4 < 12; i_4 += 2) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned char) arr_3 [i_0] [i_0] [i_2]);
                                arr_11 [(_Bool)1] [i_3] [i_0] [i_0] [(signed char)5] [(signed char)5] = ((/* implicit */unsigned long long int) ((5303310134430994039LL) != (((/* implicit */long long int) ((/* implicit */int) (short)-20637)))));
                                var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) (short)32745)) : (((/* implicit */int) (signed char)-96))))) ? (min((max((((/* implicit */long long int) var_4)), (var_8))), (((/* implicit */long long int) ((signed char) arr_8 [(unsigned char)10] [(unsigned char)10] [i_3] [i_3]))))) : (((/* implicit */long long int) min(((~(((/* implicit */int) (short)-1)))), (((/* implicit */int) ((((/* implicit */long long int) var_16)) <= (4267387955801766761LL))))))))))));
                            }
                        } 
                    } 
                } 
                arr_12 [i_0] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_5 [i_0 - 1] [i_0] [i_0] [i_0 - 1])) ? (arr_10 [i_0] [i_1] [i_0] [i_0 + 1] [i_0] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1] [i_0] [i_1] [i_0 + 1]))))), (((/* implicit */long long int) (-(((/* implicit */int) (signed char)14)))))));
                var_23 = ((/* implicit */unsigned int) max((((/* implicit */unsigned short) ((((/* implicit */_Bool) min((var_13), (var_13)))) || (((/* implicit */_Bool) (signed char)92))))), (min((var_1), (((/* implicit */unsigned short) arr_1 [i_0]))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 1) 
    {
        var_24 = ((/* implicit */unsigned char) arr_9 [i_5] [i_5] [i_5] [i_5] [i_5]);
        var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)31)) ? (((((/* implicit */unsigned int) max((-2), (((/* implicit */int) (short)1))))) % (min((892164739U), (((/* implicit */unsigned int) (unsigned char)184)))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_2))))))))));
        var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 5)) ? (13972783615182794310ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)112)))));
        var_27 = ((/* implicit */short) ((unsigned char) var_7));
    }
    /* LoopSeq 1 */
    for (short i_6 = 0; i_6 < 18; i_6 += 4) 
    {
        arr_20 [i_6] [i_6] = ((/* implicit */unsigned short) -1LL);
        /* LoopNest 2 */
        for (signed char i_7 = 0; i_7 < 18; i_7 += 1) 
        {
            for (signed char i_8 = 0; i_8 < 18; i_8 += 3) 
            {
                {
                    arr_26 [i_8] [i_7] [i_8] = ((/* implicit */unsigned char) ((unsigned long long int) min((arr_16 [i_7]), (arr_16 [i_7]))));
                    var_28 = ((/* implicit */short) min((var_28), (((/* implicit */short) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_6]))) != (18446744073709551611ULL))) ? (((((/* implicit */_Bool) var_11)) ? (var_16) : (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [(short)5] [(short)5]))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)143)) && (((/* implicit */_Bool) var_1))))))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_5)))) % ((+(920723904831389387ULL))))))))));
                }
            } 
        } 
    }
}
