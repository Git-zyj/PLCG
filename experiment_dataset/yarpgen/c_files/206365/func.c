/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206365
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
    /* LoopSeq 4 */
    for (short i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        var_11 = ((/* implicit */int) min((var_11), (((/* implicit */int) (-(2921399823U))))));
        arr_3 [i_0] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) (~(((/* implicit */int) (short)22897))))))))));
        var_12 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) var_0)))) || (((/* implicit */_Bool) ((short) max((1846750286U), (((/* implicit */unsigned int) var_10))))))));
    }
    for (unsigned short i_1 = 0; i_1 < 17; i_1 += 2) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned short) var_8);
        arr_7 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) arr_5 [i_1]))) ? (arr_0 [i_1]) : (((/* implicit */int) ((signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) == (1373567499U)))))));
    }
    for (signed char i_2 = 0; i_2 < 24; i_2 += 3) 
    {
        var_13 = ((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)7680))));
        /* LoopSeq 4 */
        for (signed char i_3 = 0; i_3 < 24; i_3 += 4) 
        {
            arr_15 [i_2] [i_3] [i_3] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) (signed char)-117)), (arr_1 [i_2]))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 3) 
            {
                arr_20 [i_4] [i_3] [i_2] = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) 1073610752)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_0))));
                var_14 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)121))) % ((~(1103612545U)))));
            }
            arr_21 [i_3] = ((/* implicit */unsigned int) arr_14 [i_2] [i_3] [i_3]);
        }
        /* vectorizable */
        for (signed char i_5 = 1; i_5 < 23; i_5 += 3) 
        {
            var_15 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_6))));
            arr_26 [i_2] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_6))));
        }
        for (int i_6 = 1; i_6 < 22; i_6 += 2) 
        {
            var_16 ^= ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-4547))) != (((((/* implicit */_Bool) (unsigned char)0)) ? (((var_0) - (2617126302U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_16 [i_2] [i_2] [i_2]))))))));
            arr_31 [i_6] [i_2] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */int) max(((_Bool)1), ((_Bool)1)))) % (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) >= (0U)))))) : (((/* implicit */int) var_3))));
        }
        /* vectorizable */
        for (signed char i_7 = 0; i_7 < 24; i_7 += 3) 
        {
            var_17 *= ((/* implicit */_Bool) (-(((/* implicit */int) var_9))));
            /* LoopSeq 2 */
            for (short i_8 = 0; i_8 < 24; i_8 += 3) 
            {
                var_18 -= ((/* implicit */_Bool) (+(((/* implicit */int) ((signed char) 2921399820U)))));
                arr_36 [i_7] [i_8] [i_7] = ((/* implicit */short) ((((/* implicit */int) var_5)) * (((/* implicit */int) (unsigned short)49563))));
                var_19 = ((((/* implicit */_Bool) arr_24 [i_7])) ? (((/* implicit */int) ((signed char) (unsigned short)3794))) : (((((/* implicit */_Bool) (signed char)52)) ? (((/* implicit */int) (short)-13610)) : (((/* implicit */int) (unsigned char)0)))));
            }
            for (unsigned int i_9 = 0; i_9 < 24; i_9 += 4) 
            {
                var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) (short)26028))));
                arr_40 [i_2] [i_7] [i_7] = ((/* implicit */signed char) ((((/* implicit */int) var_10)) - ((-(1027137178)))));
            }
            var_21 = ((/* implicit */unsigned int) min((var_21), (((arr_18 [i_2]) - (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))));
        }
        var_22 = ((((unsigned int) ((((/* implicit */_Bool) arr_12 [i_2] [i_2])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned char)23))))) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))));
        var_23 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) (+((((_Bool)1) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_7))))))), (min((((/* implicit */unsigned int) (unsigned char)255)), (((unsigned int) 1073610752))))));
    }
    /* vectorizable */
    for (short i_10 = 0; i_10 < 12; i_10 += 2) 
    {
        var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_13 [i_10] [i_10]))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_14 [i_10] [i_10] [i_10])))))));
        arr_43 [i_10] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (signed char)126))))) ? (((/* implicit */int) (unsigned char)219)) : (((((/* implicit */_Bool) (short)-16467)) ? (((/* implicit */int) (signed char)-8)) : (((/* implicit */int) var_7))))));
        var_25 ^= ((((/* implicit */int) (short)32767)) * (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (short)-10057)) : (((/* implicit */int) var_10)))));
    }
    var_26 = var_0;
}
