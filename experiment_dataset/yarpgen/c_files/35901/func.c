/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35901
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35901 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35901
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
    var_14 = ((/* implicit */signed char) ((((unsigned int) (unsigned short)1849)) + (((/* implicit */unsigned int) ((/* implicit */int) var_0)))));
    var_15 = var_0;
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                {
                    var_16 = ((/* implicit */unsigned int) ((_Bool) (unsigned short)1862));
                    var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) var_3))));
                    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (signed char)-120)) : (((/* implicit */int) arr_0 [i_1] [i_2]))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 2) 
    {
        for (unsigned short i_4 = 4; i_4 < 16; i_4 += 4) 
        {
            for (unsigned short i_5 = 3; i_5 < 14; i_5 += 4) 
            {
                {
                    var_19 += (signed char)-108;
                    arr_16 [i_3] = ((/* implicit */signed char) ((_Bool) var_6));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned long long int i_6 = 0; i_6 < 14; i_6 += 4) 
    {
        arr_20 [i_6] = ((/* implicit */signed char) min((((/* implicit */unsigned int) (unsigned short)1849)), ((~(max((((/* implicit */unsigned int) arr_7 [i_6])), (var_9)))))));
        /* LoopSeq 2 */
        for (signed char i_7 = 4; i_7 < 11; i_7 += 1) 
        {
            var_20 = ((/* implicit */signed char) max((((/* implicit */unsigned int) (signed char)-74)), (1U)));
            var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_1))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (signed char)-53)) : (((/* implicit */int) var_13))))) : (((((/* implicit */_Bool) (signed char)-90)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)14991))) : (14236865114744710970ULL)))))) ? (arr_5 [i_6] [0ULL] [i_7 - 1]) : (1U)));
            var_22 = ((/* implicit */signed char) max((var_22), ((signed char)110)));
        }
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            arr_26 [7] [i_6] [(_Bool)0] = ((/* implicit */unsigned short) (+(((((((/* implicit */int) (signed char)-1)) <= (((/* implicit */int) (signed char)31)))) ? (((/* implicit */int) arr_22 [i_6] [i_6])) : (((/* implicit */int) (signed char)-76))))));
            var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) (~((-(((23U) << (((((/* implicit */int) (unsigned short)2592)) - (2562))))))))))));
            var_24 &= var_0;
            var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) (signed char)10))));
            var_26 = ((/* implicit */signed char) max(((!(((((/* implicit */int) var_3)) < (((/* implicit */int) var_11)))))), (((((/* implicit */_Bool) ((unsigned int) arr_23 [i_6]))) || (((/* implicit */_Bool) min((((/* implicit */int) var_8)), (16383))))))));
        }
        /* LoopSeq 1 */
        for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
        {
            var_27 = ((/* implicit */signed char) max((((/* implicit */unsigned int) ((-1646558900) > (2147483647)))), (((unsigned int) (signed char)17))));
            arr_30 [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)73)) ? ((-(((/* implicit */int) arr_11 [i_6])))) : ((+(arr_7 [i_9 - 1])))));
        }
    }
    for (signed char i_10 = 0; i_10 < 19; i_10 += 4) 
    {
        arr_34 [i_10] [i_10] = ((/* implicit */signed char) ((_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)172))))))));
        var_28 = ((/* implicit */signed char) arr_1 [i_10]);
        var_29 = ((/* implicit */unsigned char) var_1);
    }
}
