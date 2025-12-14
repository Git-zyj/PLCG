/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213769
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213769 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213769
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
    for (unsigned short i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_1 = 2; i_1 < 17; i_1 += 1) 
        {
            var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) ((_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-68)))))))))));
            /* LoopNest 3 */
            for (short i_2 = 1; i_2 < 17; i_2 += 4) 
            {
                for (int i_3 = 0; i_3 < 18; i_3 += 2) 
                {
                    for (int i_4 = 2; i_4 < 16; i_4 += 3) 
                    {
                        {
                            arr_12 [i_0] [i_0] [i_0] [i_3] [i_3] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) max(((unsigned char)23), (((/* implicit */unsigned char) (signed char)-68))))) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)33551)) || (((/* implicit */_Bool) (unsigned short)33551))))))) >= (((/* implicit */int) max((((/* implicit */unsigned short) var_7)), (arr_1 [i_1 - 2]))))));
                            var_17 = ((/* implicit */short) ((int) min((((/* implicit */int) var_14)), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_5 [i_4 - 1] [i_4 - 1] [i_0] [i_4])) : (((/* implicit */int) var_15)))))));
                            arr_13 [i_0] [i_0] [i_0] [i_0] [i_3] [i_4] [i_4] = ((((((/* implicit */_Bool) min((arr_5 [i_4] [i_0] [i_0] [i_0]), (((/* implicit */short) var_14))))) ? ((+(((/* implicit */int) (short)-32333)))) : (((/* implicit */int) arr_2 [i_0])))) >= (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) min(((unsigned short)17398), (((/* implicit */unsigned short) var_12))))) : (((/* implicit */int) ((unsigned char) (signed char)67))))));
                        }
                    } 
                } 
            } 
        }
        for (signed char i_5 = 3; i_5 < 16; i_5 += 2) 
        {
            arr_16 [i_0] = ((/* implicit */short) var_8);
            /* LoopNest 2 */
            for (signed char i_6 = 0; i_6 < 18; i_6 += 1) 
            {
                for (signed char i_7 = 0; i_7 < 18; i_7 += 3) 
                {
                    {
                        var_18 = ((/* implicit */long long int) ((((/* implicit */int) arr_18 [(short)7] [i_0] [i_6])) | ((~((~(((/* implicit */int) arr_23 [i_0] [i_0] [i_6] [i_7]))))))));
                        var_19 |= ((/* implicit */signed char) var_1);
                    }
                } 
            } 
            var_20 = ((/* implicit */unsigned short) var_5);
            var_21 = ((/* implicit */unsigned char) var_8);
        }
        var_22 = var_2;
        var_23 = ((unsigned short) (~(((/* implicit */int) (signed char)101))));
        var_24 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_0))));
        var_25 = ((/* implicit */unsigned short) min((((/* implicit */int) (unsigned char)222)), (((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0 + 1] [i_0])) ? (-1951862990) : (((/* implicit */int) (short)10475))))));
    }
    var_26 = ((/* implicit */short) var_13);
}
