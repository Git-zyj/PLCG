/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210101
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210101 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210101
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
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            var_17 = ((/* implicit */unsigned int) 16148777917491187393ULL);
            /* LoopNest 2 */
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                for (int i_3 = 0; i_3 < 15; i_3 += 1) 
                {
                    {
                        arr_9 [i_0] [i_1] [i_1] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_2 - 1])) * (((/* implicit */int) var_2))))) ? (((/* implicit */int) min((((/* implicit */short) ((((/* implicit */int) var_11)) > (arr_6 [i_0] [i_2] [i_2 - 1] [i_3])))), (((short) (unsigned char)5))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((short) arr_2 [i_3]))))))));
                        arr_10 [i_1] [i_1] [i_1] [i_3] = ((/* implicit */_Bool) min((1ULL), (min((((/* implicit */unsigned long long int) 1274338861)), (arr_1 [i_2 - 1])))));
                    }
                } 
            } 
            var_18 -= ((/* implicit */unsigned int) ((short) (~(min((2166230006U), (((/* implicit */unsigned int) (signed char)15)))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
            {
                arr_13 [i_1] [i_1] [i_1] = var_4;
                var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_5 [i_0] [i_1] [(_Bool)1] [i_1]))))) ? (((/* implicit */int) arr_8 [i_4] [i_4 + 1] [i_4] [i_4 + 1])) : (((/* implicit */int) var_16)))))));
                var_20 = ((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))));
                var_21 -= ((/* implicit */unsigned char) (unsigned short)65518);
                arr_14 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) (~((((_Bool)1) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_5 [i_0] [i_0] [i_1] [i_0]))))));
            }
            /* LoopSeq 2 */
            /* vectorizable */
            for (signed char i_5 = 4; i_5 < 14; i_5 += 1) 
            {
                var_22 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_5 [i_5] [i_5 + 1] [i_1] [i_5 - 2])) != (((/* implicit */int) arr_18 [i_5 - 3] [i_5] [i_5 - 2] [i_5 - 4]))));
                /* LoopNest 2 */
                for (unsigned char i_6 = 1; i_6 < 13; i_6 += 2) 
                {
                    for (unsigned char i_7 = 1; i_7 < 14; i_7 += 3) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) arr_2 [(signed char)4]))) ? ((~(((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) arr_8 [i_6 + 1] [i_6] [i_5 - 2] [i_0])))))));
                            arr_24 [i_5] [i_1] [1LL] [i_1] [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) -1508507600)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_5 - 1] [i_5 - 1] [i_6 + 2]))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) / (7079697164166915455ULL)))));
                            arr_25 [i_1] [i_6] [(unsigned char)9] [i_5 - 4] [i_1] [i_1] = ((/* implicit */unsigned int) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) & (5846868177117739944ULL)))));
                        }
                    } 
                } 
                var_24 = ((/* implicit */signed char) ((unsigned int) (-(((/* implicit */int) (signed char)15)))));
                arr_26 [i_1] [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_15 [i_0] [i_5 - 4] [i_1] [i_5]))));
            }
            for (unsigned short i_8 = 0; i_8 < 15; i_8 += 2) 
            {
                var_25 |= ((/* implicit */unsigned short) -1157754015);
                arr_29 [i_0] [i_1] [(signed char)2] = ((/* implicit */long long int) (((~(2297966156218364215ULL))) + (((/* implicit */unsigned long long int) (((~(8810398661992743626LL))) * (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)29)) || (((/* implicit */_Bool) var_5)))))))))));
                arr_30 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_8] [i_8] [i_8]))) | (7078637682590285560ULL)))) ? (((/* implicit */int) min(((_Bool)1), (arr_11 [i_8] [i_8] [i_8])))) : (((/* implicit */int) ((((/* implicit */int) (signed char)35)) <= (((/* implicit */int) (unsigned char)48)))))));
            }
        }
        arr_31 [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_0])) & (((/* implicit */int) (unsigned char)207))))) : (((((/* implicit */_Bool) var_4)) ? (2585513622395268174ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))))))));
        arr_32 [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */int) (signed char)5)) == (((/* implicit */int) var_4)))) ? (((/* implicit */int) arr_2 [(signed char)9])) : (((/* implicit */int) min(((_Bool)1), (arr_0 [i_0]))))));
        /* LoopNest 2 */
        for (short i_9 = 0; i_9 < 15; i_9 += 1) 
        {
            for (unsigned char i_10 = 0; i_10 < 15; i_10 += 4) 
            {
                {
                    var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) max((((unsigned long long int) arr_7 [i_0] [i_9] [i_10] [i_10])), (((/* implicit */unsigned long long int) ((long long int) (-(((/* implicit */int) arr_8 [12ULL] [i_0] [i_9] [i_10])))))))))));
                    arr_37 [i_0] [i_9] [i_10] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 4035225266123964416LL)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (short)19667)))))))) : (((/* implicit */int) arr_2 [i_10]))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (int i_11 = 0; i_11 < 16; i_11 += 2) 
    {
        var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 1274338861)) ? (((/* implicit */int) arr_38 [i_11])) : (((/* implicit */int) arr_38 [i_11]))));
        var_28 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((unsigned short) (unsigned char)86)))));
        var_29 = ((/* implicit */short) (+(((/* implicit */int) arr_38 [i_11]))));
        var_30 = ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) arr_38 [i_11]))));
        var_31 = ((/* implicit */signed char) var_14);
    }
    var_32 = min((((((/* implicit */int) ((short) (signed char)-5))) == ((~(((/* implicit */int) var_5)))))), (var_0));
    var_33 = ((/* implicit */unsigned int) var_14);
    var_34 = ((/* implicit */unsigned long long int) (~(var_8)));
    var_35 = ((/* implicit */short) (-(((/* implicit */int) var_2))));
}
