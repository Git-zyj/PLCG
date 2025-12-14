/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42500
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42500 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42500
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
    for (signed char i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) min((((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) 3811988016U)) ? (arr_0 [i_0] [i_0]) : (((/* implicit */long long int) 3U)))))), ((+(((2411093928U) >> (((5320188713811634496LL) - (5320188713811634484LL)))))))));
        var_20 = ((/* implicit */unsigned char) arr_0 [i_0] [i_0]);
    }
    for (short i_1 = 4; i_1 < 16; i_1 += 1) 
    {
        var_21 = ((signed char) (+(2411093928U)));
        var_22 = ((/* implicit */_Bool) ((unsigned short) ((arr_3 [i_1]) ? (((long long int) var_6)) : (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)113)) ? (7U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)6)))))))));
        /* LoopNest 3 */
        for (short i_2 = 0; i_2 < 17; i_2 += 1) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (unsigned long long int i_4 = 1; i_4 < 15; i_4 += 3) 
                {
                    {
                        var_23 = ((/* implicit */long long int) (unsigned short)12839);
                        arr_14 [(signed char)6] [i_3] [i_3] [i_2] [(signed char)6] &= ((/* implicit */long long int) var_6);
                    }
                } 
            } 
        } 
    }
    for (unsigned int i_5 = 0; i_5 < 22; i_5 += 1) 
    {
        var_24 = ((((/* implicit */_Bool) arr_15 [i_5] [6LL])) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) max((arr_16 [(signed char)8]), (((/* implicit */unsigned char) var_17))))) <= (((/* implicit */int) (!(((/* implicit */_Bool) -1086740922469825666LL))))))))));
        var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((9199366936282639664LL) >> (((((/* implicit */int) arr_16 [i_5])) - (157))))) >> (((((/* implicit */_Bool) arr_16 [i_5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)1))) : (var_9)))))))))));
        var_26 += ((((/* implicit */_Bool) max((arr_16 [i_5]), (((/* implicit */unsigned char) var_1))))) && (((/* implicit */_Bool) ((int) arr_16 [i_5]))));
        /* LoopSeq 2 */
        for (long long int i_6 = 0; i_6 < 22; i_6 += 3) 
        {
            /* LoopNest 2 */
            for (long long int i_7 = 0; i_7 < 22; i_7 += 3) 
            {
                for (long long int i_8 = 0; i_8 < 22; i_8 += 3) 
                {
                    {
                        var_27 = min((min((arr_23 [i_5] [i_8]), (((/* implicit */long long int) var_17)))), (min((arr_23 [i_5] [i_6]), (arr_23 [i_5] [i_6]))));
                        var_28 = ((/* implicit */signed char) max((max((((unsigned long long int) arr_19 [i_5])), (((/* implicit */unsigned long long int) (+(arr_15 [3ULL] [i_6])))))), (((/* implicit */unsigned long long int) ((arr_22 [i_5]) >> (((arr_23 [i_7] [i_6]) - (5539311524344800473LL))))))));
                    }
                } 
            } 
            var_29 = ((/* implicit */short) 6236941780032836925LL);
        }
        for (long long int i_9 = 0; i_9 < 22; i_9 += 3) 
        {
            arr_29 [i_9] [(_Bool)1] [(_Bool)1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 5320188713811634506LL)) ? (-27LL) : (((/* implicit */long long int) 3331121747U))));
            var_30 ^= ((_Bool) (+(9199366936282639664LL)));
            /* LoopNest 2 */
            for (unsigned char i_10 = 0; i_10 < 22; i_10 += 2) 
            {
                for (int i_11 = 2; i_11 < 21; i_11 += 2) 
                {
                    {
                        var_31 = ((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((int) arr_30 [(unsigned char)8] [5ULL] [5ULL]))) >= (((((/* implicit */_Bool) arr_15 [i_5] [(_Bool)1])) ? (arr_19 [i_10]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)32767))))))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)127))) : (((((/* implicit */_Bool) 5320188713811634506LL)) ? (-6236941780032836925LL) : (-6236941780032836927LL)))));
                        arr_37 [i_11] [i_5] [i_5] [i_5] = ((/* implicit */_Bool) (-((+(((-6236941780032836902LL) & (((/* implicit */long long int) var_4))))))));
                        arr_38 [i_9] [i_5] [i_9] [i_5] = ((/* implicit */unsigned short) max((min((((/* implicit */unsigned long long int) ((6236941780032836922LL) != (((/* implicit */long long int) ((/* implicit */int) (short)28801)))))), (((((/* implicit */_Bool) arr_15 [i_5] [i_10])) ? (((/* implicit */unsigned long long int) -6125909487089098905LL)) : (10519777623575944736ULL))))), (((/* implicit */unsigned long long int) ((_Bool) arr_25 [i_11 + 1] [i_11 - 1] [i_11 + 1] [i_11 - 2])))));
                    }
                } 
            } 
            arr_39 [(_Bool)0] [(_Bool)0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) (unsigned short)12233))) ? (max((max((((/* implicit */unsigned long long int) (signed char)-62)), (var_6))), (((/* implicit */unsigned long long int) (-(arr_27 [i_9] [i_5])))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)27856)) ? (3568830354318325231LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))))))));
            var_32 = ((/* implicit */int) ((unsigned long long int) arr_15 [i_5] [i_9]));
        }
        /* LoopNest 2 */
        for (signed char i_12 = 2; i_12 < 21; i_12 += 3) 
        {
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                {
                    var_33 = ((/* implicit */short) arr_16 [i_5]);
                    arr_46 [9] [i_13] [i_13] [i_5] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_21 [i_12 - 1] [i_12 - 2] [i_12 + 1])) - (((/* implicit */int) arr_21 [i_12 + 1] [i_12 - 1] [i_12 - 2])))) <= (((/* implicit */int) ((-1073201741) <= (1073201765))))));
                }
            } 
        } 
    }
    for (int i_14 = 2; i_14 < 20; i_14 += 2) 
    {
        var_34 = ((/* implicit */int) arr_21 [i_14] [i_14 - 1] [i_14]);
        arr_49 [i_14 - 2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) (signed char)-49))) ? (((long long int) arr_25 [i_14 - 2] [i_14 - 2] [i_14 - 2] [i_14 + 1])) : (((/* implicit */long long int) (+(arr_19 [i_14]))))));
        var_35 += ((/* implicit */unsigned int) ((((((((/* implicit */_Bool) arr_27 [i_14] [i_14])) ? (((/* implicit */int) (signed char)-77)) : (((/* implicit */int) (_Bool)1)))) - (((/* implicit */int) arr_41 [i_14 + 2])))) ^ (((/* implicit */int) ((unsigned short) max(((short)-32757), (((/* implicit */short) (signed char)49))))))));
        var_36 = ((/* implicit */unsigned short) arr_27 [i_14 + 2] [i_14 + 2]);
    }
    var_37 |= ((/* implicit */unsigned char) var_13);
    var_38 = ((/* implicit */unsigned short) ((unsigned int) min((((/* implicit */int) var_12)), ((+(((/* implicit */int) (signed char)42)))))));
    var_39 = ((/* implicit */unsigned short) var_5);
    var_40 &= ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (var_18) : (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))), (((var_15) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))))) ? (((long long int) ((short) 6010130843358783804ULL))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) != (((/* implicit */int) var_1))))))));
}
