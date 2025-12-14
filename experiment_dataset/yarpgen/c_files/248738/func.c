/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248738
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248738 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248738
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
    for (int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (signed char i_1 = 3; i_1 < 9; i_1 += 2) 
        {
            {
                var_10 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)11)) ? (((/* implicit */int) (signed char)-44)) : (((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) ((unsigned char) (~(((/* implicit */int) (_Bool)1))))))));
                var_11 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-54)) > (((/* implicit */int) (_Bool)0)))) ? (((/* implicit */int) (signed char)-44)) : (((/* implicit */int) max((arr_4 [i_1] [i_1 + 1]), (arr_4 [i_1] [i_0]))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_1] [i_1])) || (((/* implicit */_Bool) (unsigned char)255))))) : (max((((/* implicit */int) (signed char)-71)), (((((/* implicit */_Bool) (signed char)-43)) ? (0) : (((/* implicit */int) (signed char)61))))))));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 10; i_2 += 2) 
                {
                    for (signed char i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        {
                            arr_12 [i_0] [i_1] [i_2] [i_2] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(max((((/* implicit */int) (short)-22074)), (arr_2 [i_0])))))) ? (((/* implicit */int) (signed char)-44)) : (((((/* implicit */int) arr_7 [i_0] [i_1 + 1] [i_2] [i_1])) % ((~(-1643170834)))))));
                            var_12 = ((/* implicit */unsigned char) max((var_12), (((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */int) (signed char)-71)), ((-(((/* implicit */int) (signed char)0))))))) ? ((+(((/* implicit */int) max(((short)(-32767 - 1)), (((/* implicit */short) arr_10 [i_0] [i_2] [i_2] [i_3] [i_2] [i_2]))))))) : ((((!(((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_1] [i_3] [i_3] [i_3])))) ? ((-2147483647 - 1)) : (((/* implicit */int) min((((/* implicit */unsigned char) (signed char)-44)), ((unsigned char)221)))))))))));
                        }
                    } 
                } 
                arr_13 [i_1] = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */int) ((((/* implicit */int) arr_0 [i_0] [i_0])) == (((/* implicit */int) arr_11 [i_0] [i_1] [i_0] [i_1 + 1] [i_1] [i_0]))))) <= (((((/* implicit */int) (short)32767)) - (((/* implicit */int) arr_4 [i_1] [i_1])))))));
            }
        } 
    } 
    var_13 = min((((/* implicit */signed char) var_6)), (((signed char) (!(((/* implicit */_Bool) var_0))))));
    /* LoopSeq 1 */
    for (short i_4 = 0; i_4 < 23; i_4 += 4) 
    {
        arr_16 [i_4] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-81)))))))) < (((/* implicit */int) ((_Bool) arr_15 [i_4])))));
        arr_17 [i_4] = ((/* implicit */short) ((max(((+(((/* implicit */int) (short)-14826)))), (((((/* implicit */_Bool) (unsigned char)64)) ? (((/* implicit */int) arr_15 [i_4])) : (((/* implicit */int) arr_15 [i_4])))))) < (((/* implicit */int) (signed char)-1))));
        arr_18 [i_4] = ((short) (unsigned char)149);
    }
    var_14 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((short) (signed char)91))) ? (((((/* implicit */_Bool) (signed char)-92)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (signed char)81)))) : (((/* implicit */int) max((((/* implicit */short) (signed char)-44)), ((short)15868)))))) < (((/* implicit */int) ((short) var_9)))));
}
