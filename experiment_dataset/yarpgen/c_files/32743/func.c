/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32743
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32743 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32743
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
    var_18 = ((/* implicit */short) (+(((/* implicit */int) (unsigned short)50962))));
    var_19 = ((/* implicit */long long int) var_13);
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        var_20 = ((/* implicit */unsigned long long int) (~(284016829U)));
        /* LoopNest 2 */
        for (signed char i_1 = 1; i_1 < 16; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-32007)) || (((/* implicit */_Bool) arr_3 [i_0] [i_1 + 2]))));
                    var_22 *= ((((/* implicit */_Bool) (short)-32007)) ? (arr_3 [i_0] [i_1 + 1]) : (16383U));
                }
            } 
        } 
        arr_8 [i_0] = ((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_0]))) | (233734521U));
    }
    for (long long int i_3 = 0; i_3 < 24; i_3 += 3) 
    {
        var_23 = ((/* implicit */long long int) (((+(min((((/* implicit */unsigned int) arr_9 [i_3])), (4131291460U))))) <= (((/* implicit */unsigned int) (-(((/* implicit */int) arr_10 [i_3] [i_3])))))));
        /* LoopNest 3 */
        for (unsigned short i_4 = 0; i_4 < 24; i_4 += 1) 
        {
            for (long long int i_5 = 4; i_5 < 22; i_5 += 1) 
            {
                for (unsigned short i_6 = 0; i_6 < 24; i_6 += 1) 
                {
                    {
                        arr_24 [i_3] [i_4] [i_3] [i_4] = ((/* implicit */_Bool) (~((~(((/* implicit */int) var_9))))));
                        /* LoopSeq 1 */
                        for (short i_7 = 0; i_7 < 24; i_7 += 3) 
                        {
                            var_24 = ((/* implicit */unsigned short) ((unsigned char) (!(((/* implicit */_Bool) arr_17 [i_3] [i_3])))));
                            var_25 = (~(((((/* implicit */_Bool) arr_11 [i_3])) ? (((long long int) 4131291460U)) : (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_3] [i_3]))))));
                            var_26 -= ((/* implicit */_Bool) 6030382581860460375LL);
                        }
                    }
                } 
            } 
        } 
        var_27 = ((/* implicit */unsigned long long int) (+(min((((/* implicit */long long int) min((var_3), (((/* implicit */unsigned int) var_16))))), (min((((/* implicit */long long int) var_16)), (var_17)))))));
        var_28 -= ((/* implicit */unsigned short) ((16383U) >> (((1677521095U) - (1677521068U)))));
    }
    /* vectorizable */
    for (signed char i_8 = 3; i_8 < 7; i_8 += 1) 
    {
        var_29 = ((/* implicit */unsigned int) ((4294950910U) == (((/* implicit */unsigned int) ((/* implicit */int) (short)6836)))));
        arr_30 [i_8] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) (short)32006)) : (((/* implicit */int) var_6))));
        var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) (+(4194303ULL))))));
    }
    /* LoopNest 2 */
    for (unsigned long long int i_9 = 0; i_9 < 12; i_9 += 2) 
    {
        for (long long int i_10 = 4; i_10 < 11; i_10 += 3) 
        {
            {
                var_31 = ((/* implicit */unsigned long long int) (((((+(4281917717160972076ULL))) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_10 - 3]))))) || (((/* implicit */_Bool) ((min((var_1), (var_3))) >> (((arr_14 [i_10 - 2] [i_10]) - (3234597487U))))))));
                arr_38 [i_10] [i_10] = ((/* implicit */_Bool) (unsigned char)2);
                var_32 -= ((/* implicit */short) min((((((/* implicit */_Bool) (~(163675813U)))) ? (((((/* implicit */_Bool) 2747652505U)) ? (((/* implicit */unsigned long long int) 4294967290U)) : (var_11))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (short)-32010))))))), (((/* implicit */unsigned long long int) min((((/* implicit */int) (short)1770)), ((~(((/* implicit */int) (signed char)-28)))))))));
            }
        } 
    } 
}
