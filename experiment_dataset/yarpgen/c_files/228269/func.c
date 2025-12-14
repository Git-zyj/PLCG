/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228269
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228269 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228269
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
    for (int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (unsigned int i_2 = 1; i_2 < 12; i_2 += 2) 
            {
                {
                    var_20 = ((/* implicit */short) 730744618);
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        var_21 = ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */_Bool) (signed char)0)) ? (2084377381) : (-2084377396))));
                        var_22 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_2 - 1] [i_3] [i_2 - 1]))) + (var_5)));
                        /* LoopSeq 3 */
                        for (unsigned short i_4 = 4; i_4 < 10; i_4 += 2) 
                        {
                            var_23 = ((/* implicit */unsigned short) -730744619);
                            var_24 = ((/* implicit */_Bool) ((unsigned char) arr_8 [i_4 - 2] [i_2] [i_4 - 1] [i_4 + 1] [i_2] [i_2 + 1]));
                            var_25 = ((/* implicit */signed char) (unsigned char)1);
                            var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_3 [i_2 + 1])) : (((/* implicit */int) arr_3 [i_2 + 1]))));
                        }
                        for (unsigned int i_5 = 0; i_5 < 13; i_5 += 1) 
                        {
                            var_27 = ((/* implicit */unsigned short) var_8);
                            var_28 |= 2084377372;
                            var_29 = ((/* implicit */unsigned int) min((var_29), (((/* implicit */unsigned int) ((int) -9219059374856442214LL)))));
                        }
                        for (unsigned int i_6 = 0; i_6 < 13; i_6 += 2) 
                        {
                            var_30 = ((/* implicit */_Bool) -9219059374856442205LL);
                            var_31 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_10 [i_0] [i_0] [i_2 + 1] [i_6] [(unsigned short)10] [i_1] [i_2 + 1])) + (((/* implicit */int) var_3))));
                        }
                        var_32 *= arr_15 [i_2 - 1];
                    }
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned char i_7 = 1; i_7 < 14; i_7 += 3) 
    {
        /* LoopNest 3 */
        for (int i_8 = 0; i_8 < 15; i_8 += 3) 
        {
            for (unsigned int i_9 = 1; i_9 < 14; i_9 += 1) 
            {
                for (unsigned short i_10 = 0; i_10 < 15; i_10 += 1) 
                {
                    {
                        var_33 = ((/* implicit */long long int) ((unsigned int) (!(((/* implicit */_Bool) ((unsigned short) arr_23 [(_Bool)1] [i_8]))))));
                        var_34 *= ((/* implicit */unsigned short) (-(9219059374856442194LL)));
                        var_35 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [(signed char)4])) ? (((/* implicit */unsigned long long int) var_9)) : ((+(0ULL)))));
                    }
                } 
            } 
        } 
        var_36 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_18))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_18 [i_7 + 1]), (((/* implicit */unsigned short) (unsigned char)51)))))) : (((((/* implicit */unsigned long long int) 2084377379)) & (13ULL)))));
    }
    /* vectorizable */
    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
    {
        var_37 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) arr_31 [i_11]))) - (-6819842799095842034LL)));
        var_38 = ((/* implicit */unsigned int) (+(((/* implicit */int) var_8))));
        var_39 = ((/* implicit */int) max((var_39), (((((/* implicit */int) arr_30 [i_11])) & (((/* implicit */int) var_8))))));
        var_40 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_30 [i_11]))));
        var_41 = ((/* implicit */signed char) (unsigned short)10272);
    }
    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned int i_13 = 1; i_13 < 14; i_13 += 1) 
        {
            var_42 = ((/* implicit */unsigned char) min((var_42), (((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */int) ((_Bool) 0ULL))) < (((/* implicit */int) ((((/* implicit */_Bool) var_15)) && (((/* implicit */_Bool) var_14)))))))))))));
            var_43 = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)176)), ((unsigned short)19585)))) & (((((/* implicit */int) arr_35 [i_13])) / (((/* implicit */int) arr_30 [i_12]))))))), (max((9219059374856442187LL), (((/* implicit */long long int) arr_32 [i_12]))))));
            /* LoopNest 3 */
            for (int i_14 = 0; i_14 < 16; i_14 += 3) 
            {
                for (short i_15 = 0; i_15 < 16; i_15 += 3) 
                {
                    for (unsigned short i_16 = 4; i_16 < 13; i_16 += 3) 
                    {
                        {
                            var_44 = ((/* implicit */signed char) max((((unsigned int) -6819842799095842034LL)), ((~(arr_38 [i_16 - 3] [i_12])))));
                            var_45 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((int) 18446744073709551595ULL))), (((arr_39 [i_12] [i_16 - 1] [i_13 + 2] [i_15] [i_16 - 1] [i_16]) | (((/* implicit */long long int) ((/* implicit */int) arr_37 [i_12] [i_16 + 2] [i_13 + 2])))))));
                        }
                    } 
                } 
            } 
            var_46 = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)7)) - (((/* implicit */int) ((((/* implicit */int) ((_Bool) 67108864U))) != (((/* implicit */int) arr_41 [i_12] [i_12] [i_13])))))));
        }
        for (signed char i_17 = 0; i_17 < 16; i_17 += 2) 
        {
            var_47 &= (+(max((((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_14)))), (((arr_36 [i_17] [i_12]) & (((/* implicit */int) var_14)))))));
            var_48 = ((/* implicit */_Bool) (((~(((/* implicit */int) arr_34 [i_12] [i_17])))) ^ (((((/* implicit */int) (unsigned short)13802)) & (((/* implicit */int) arr_34 [i_12] [i_17]))))));
        }
        var_49 += ((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [10]))) < (var_5))) || (((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */int) var_17)) <= (((/* implicit */int) (_Bool)1))))))))));
        var_50 = ((/* implicit */short) max((var_50), (((/* implicit */short) (~((~(21ULL))))))));
        var_51 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) var_16))) ? (((unsigned int) (+(((/* implicit */int) (short)7218))))) : (((((/* implicit */_Bool) var_17)) ? (((unsigned int) (unsigned char)187)) : (((/* implicit */unsigned int) ((/* implicit */int) arr_35 [i_12])))))));
        /* LoopNest 2 */
        for (unsigned long long int i_18 = 0; i_18 < 16; i_18 += 3) 
        {
            for (unsigned short i_19 = 1; i_19 < 14; i_19 += 3) 
            {
                {
                    var_52 |= ((/* implicit */short) (!((!(((/* implicit */_Bool) arr_45 [i_12] [(signed char)10] [i_19]))))));
                    /* LoopNest 2 */
                    for (unsigned short i_20 = 1; i_20 < 13; i_20 += 2) 
                    {
                        for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                        {
                            {
                                var_53 *= ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (signed char)31)), (0ULL)));
                                var_54 = max((max((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)93)) / (-2084377398)))), ((-(23U))))), ((((_Bool)1) ? (arr_52 [i_12]) : (max((((/* implicit */unsigned int) var_8)), (arr_38 [(unsigned short)2] [i_12]))))));
                                var_55 = ((/* implicit */short) var_5);
                                var_56 = ((/* implicit */unsigned short) (-(((unsigned long long int) 18446744073709551606ULL))));
                            }
                        } 
                    } 
                    var_57 = ((/* implicit */signed char) min((var_57), (((/* implicit */signed char) 1114462776))));
                }
            } 
        } 
    }
    var_58 = ((/* implicit */unsigned short) var_12);
}
