/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215957
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215957 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215957
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
    var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-93)) ? ((+(((((/* implicit */_Bool) (unsigned short)33733)) ? (((/* implicit */int) (unsigned char)127)) : (((/* implicit */int) var_4)))))) : (var_1)));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 2; i_0 < 16; i_0 += 2) 
    {
        arr_3 [i_0] [i_0 - 1] = ((/* implicit */unsigned long long int) max((((long long int) arr_1 [i_0 - 1])), (((/* implicit */long long int) (+(((/* implicit */int) (signed char)(-127 - 1))))))));
        arr_4 [i_0] = ((/* implicit */_Bool) ((((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) arr_2 [i_0 - 1] [i_0 - 2])))) ? (((/* implicit */int) arr_1 [i_0 - 1])) : (((/* implicit */int) ((_Bool) arr_0 [i_0 - 1] [i_0 + 1])))));
        var_14 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_2 [(_Bool)1] [i_0 - 2]))));
    }
    for (unsigned long long int i_1 = 2; i_1 < 14; i_1 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned short i_2 = 0; i_2 < 16; i_2 += 2) 
        {
            for (unsigned char i_3 = 0; i_3 < 16; i_3 += 1) 
            {
                for (signed char i_4 = 0; i_4 < 16; i_4 += 4) 
                {
                    {
                        arr_15 [(unsigned short)7] [4U] [i_3] [i_4] &= ((/* implicit */unsigned long long int) (-(((var_3) / (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_2])))))));
                        arr_16 [i_1] [i_2] &= ((/* implicit */signed char) -3256565164160112224LL);
                        var_15 = ((((/* implicit */_Bool) (unsigned char)148)) ? (((/* implicit */int) (unsigned short)63042)) : (536854528));
                        /* LoopSeq 3 */
                        for (unsigned short i_5 = 1; i_5 < 15; i_5 += 4) 
                        {
                            arr_21 [i_1 - 2] [i_1] [i_1] [i_1] [i_1 - 2] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) 3256565164160112232LL)) ? (((/* implicit */long long int) arr_6 [i_5 - 1])) : ((-(arr_8 [i_1]))))), (((/* implicit */long long int) arr_10 [i_1] [i_1 + 2]))));
                            var_16 = ((/* implicit */unsigned short) ((signed char) (+(536854528))));
                            var_17 &= ((/* implicit */unsigned short) (~(((/* implicit */int) (signed char)-42))));
                            var_18 -= ((/* implicit */unsigned char) min((((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_6)) == (((/* implicit */int) arr_9 [i_1])))))) != (((var_9) % (((/* implicit */long long int) var_8))))))), (((((/* implicit */_Bool) (+(-872359825)))) ? (((/* implicit */long long int) var_8)) : (min((arr_8 [i_2]), (((/* implicit */long long int) -35148223))))))));
                        }
                        for (unsigned short i_6 = 2; i_6 < 15; i_6 += 2) 
                        {
                            var_19 += ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)38461)) ? (3256565164160112252LL) : (((/* implicit */long long int) -991037071))));
                            arr_25 [i_1 + 2] [i_1 + 2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_2] [i_2] [i_2] [i_6 - 2]))) * ((+(var_0)))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)127)) / ((+(arr_10 [i_2] [i_6])))))) : (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) 3256565164160112244LL)) ? (((/* implicit */int) (unsigned char)164)) : (((/* implicit */int) (signed char)-2))))), (((unsigned int) var_6))))));
                            arr_26 [i_6] [i_3] [(unsigned short)2] = ((int) max((((/* implicit */int) (unsigned short)27074)), ((+(var_12)))));
                        }
                        for (unsigned short i_7 = 0; i_7 < 16; i_7 += 1) 
                        {
                            var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) ((((/* implicit */_Bool) ((short) var_3))) ? (((/* implicit */int) (!(((_Bool) arr_7 [(signed char)6]))))) : (((/* implicit */int) (!((!(((/* implicit */_Bool) arr_11 [i_7]))))))))))));
                            arr_30 [i_1] [i_1] [i_1 + 1] [i_1] [i_1 + 1] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_1 + 2] [i_1]))))) < (((/* implicit */int) (!(((/* implicit */_Bool) (short)-10055))))))))));
                        }
                        var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) (+((-(((/* implicit */int) ((_Bool) (unsigned short)2515))))))))));
                    }
                } 
            } 
        } 
        var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) max((((/* implicit */long long int) (unsigned short)49681)), (var_9))))));
        /* LoopNest 2 */
        for (unsigned char i_8 = 2; i_8 < 14; i_8 += 2) 
        {
            for (signed char i_9 = 3; i_9 < 15; i_9 += 2) 
            {
                {
                    var_23 = ((/* implicit */_Bool) min((var_23), (((max((((/* implicit */unsigned long long int) arr_17 [i_1 - 2] [i_8 + 1] [i_9])), (var_2))) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_7))))))));
                    arr_36 [i_1 + 1] = ((/* implicit */signed char) arr_6 [i_1]);
                }
            } 
        } 
    }
    /* LoopNest 2 */
    for (unsigned char i_10 = 1; i_10 < 10; i_10 += 2) 
    {
        for (unsigned char i_11 = 3; i_11 < 11; i_11 += 2) 
        {
            {
                var_24 = ((((/* implicit */_Bool) (+(((/* implicit */int) arr_18 [i_11 + 2] [i_11 + 2] [i_11 - 2] [i_11 + 1] [i_11 + 2]))))) ? ((-(((/* implicit */int) (unsigned short)38476)))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_18 [i_11 - 1] [i_11 - 1] [i_11 - 2] [i_11 - 1] [i_11 - 2])) : (((/* implicit */int) arr_18 [i_11 - 2] [i_11 - 2] [i_11 + 2] [i_11] [i_11 - 3])))));
                var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((unsigned long long int) arr_33 [i_11 + 2])) - (((/* implicit */unsigned long long int) ((long long int) arr_23 [i_10 + 3] [i_10 + 3] [i_10 + 2] [i_10 + 3] [i_10 + 1])))))) ? (((((/* implicit */_Bool) ((unsigned int) var_7))) ? (((/* implicit */unsigned int) ((int) (unsigned short)42511))) : (3041617866U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) 12986118428354848519ULL)))))))));
                arr_41 [i_10 + 2] [i_11] [i_11] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_32 [i_10 + 1])) ? (var_9) : (((/* implicit */long long int) arr_13 [i_10 + 2])))) != (((/* implicit */long long int) (-(2075734561U))))));
            }
        } 
    } 
}
