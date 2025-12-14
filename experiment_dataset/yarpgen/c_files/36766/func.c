/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36766
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36766 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36766
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
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 17; i_0 += 4) 
    {
        for (int i_1 = 2; i_1 < 15; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                {
                    var_11 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_6 [i_1 + 1] [i_0 + 1])) ? (arr_4 [i_0 - 1]) : (arr_4 [i_0 + 1])))));
                    var_12 = ((/* implicit */long long int) min((var_12), (((/* implicit */long long int) ((unsigned int) (~((~(var_7)))))))));
                    var_13 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) ((short) var_9))) ? (((((/* implicit */_Bool) var_2)) ? (arr_7 [i_1 - 2] [i_0 + 1] [i_1 - 2]) : (var_8))) : (((/* implicit */unsigned int) ((/* implicit */int) ((var_5) == (((/* implicit */unsigned int) ((/* implicit */int) (short)10520)))))))))));
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned int i_3 = 1; i_3 < 14; i_3 += 2) 
    {
        var_14 = ((/* implicit */short) (+((+(var_8)))));
        arr_11 [i_3] = ((((/* implicit */_Bool) (short)10498)) ? (-2863921343922798689LL) : (((/* implicit */long long int) 950720231U)));
    }
    for (signed char i_4 = 4; i_4 < 11; i_4 += 3) /* same iter space */
    {
        /* LoopSeq 3 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            var_15 = ((/* implicit */_Bool) 2863921343922798689LL);
            arr_18 [(_Bool)1] [i_5] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_5) / (((/* implicit */unsigned int) var_9))))) ? (max((4069355869U), (((/* implicit */unsigned int) (short)414)))) : ((+(arr_12 [i_4 - 4] [i_5])))));
            arr_19 [i_4 - 1] [i_5] &= ((/* implicit */short) (~(((/* implicit */int) arr_2 [i_4 - 1] [i_4 + 1]))));
        }
        for (short i_6 = 2; i_6 < 11; i_6 += 2) /* same iter space */
        {
            var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) arr_8 [i_4]))));
            arr_23 [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (short)28362)), (max((((/* implicit */unsigned short) (signed char)-69)), ((unsigned short)64920)))))) ? (2863921343922798692LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [5ULL])) ? (var_6) : (var_1)))) ? (arr_12 [i_6 - 1] [i_4 - 4]) : (var_6))))));
            var_17 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((var_8) != (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) != (var_6))))))))) != ((~(max((2863921343922798689LL), (((/* implicit */long long int) var_5))))))));
            var_18 = ((/* implicit */short) ((long long int) min((var_0), (((/* implicit */unsigned long long int) var_7)))));
        }
        for (short i_7 = 2; i_7 < 11; i_7 += 2) /* same iter space */
        {
            var_19 = ((/* implicit */_Bool) ((((arr_5 [i_7 + 1] [7]) >= (3762624980299607598ULL))) ? (((((/* implicit */_Bool) arr_15 [i_4] [i_4])) ? (arr_7 [i_4 - 1] [i_7] [i_7 - 2]) : (var_8))) : ((+(min((var_4), (arr_20 [i_4] [i_7])))))));
            var_20 ^= ((/* implicit */long long int) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) 14061148499235900402ULL))))), (max((var_1), (arr_13 [i_7 + 2])))));
        }
        arr_28 [i_4] &= ((/* implicit */unsigned int) var_2);
        var_21 = (-(((/* implicit */int) ((arr_3 [i_4 - 2]) <= (((/* implicit */unsigned int) (~(((/* implicit */int) (short)6937)))))))));
        var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_6)))) ? (((var_1) % (((/* implicit */unsigned int) var_9)))) : (arr_7 [i_4 - 4] [i_4] [i_4])))) ? (max((((/* implicit */unsigned long long int) arr_13 [i_4 - 1])), (var_10))) : (((/* implicit */unsigned long long int) ((int) (~(var_4)))))));
    }
    for (signed char i_8 = 4; i_8 < 11; i_8 += 3) /* same iter space */
    {
        var_23 = ((/* implicit */int) (_Bool)1);
        var_24 = (+(3167827953U));
        var_25 |= ((/* implicit */unsigned long long int) ((unsigned int) (-(arr_7 [i_8 - 3] [i_8 - 2] [i_8 + 2]))));
    }
    var_26 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)28376))) == (var_3)))) : (var_9))), ((~(((/* implicit */int) ((short) 4385595574473651214ULL)))))));
    /* LoopSeq 1 */
    for (signed char i_9 = 2; i_9 < 12; i_9 += 1) 
    {
        var_27 = ((/* implicit */short) (-((+(var_0)))));
        var_28 &= ((/* implicit */long long int) ((var_0) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_9 + 2])))));
    }
}
