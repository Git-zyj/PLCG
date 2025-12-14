/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24689
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24689 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24689
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
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (signed char i_3 = 2; i_3 < 17; i_3 += 3) 
                    {
                        arr_10 [i_2] [i_2] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)181)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 1921669395)) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)73)) || (((/* implicit */_Bool) (unsigned char)232))))) : (((/* implicit */int) (unsigned char)205)))))));
                        var_11 = ((/* implicit */int) var_10);
                    }
                    var_12 *= ((/* implicit */unsigned short) (unsigned char)51);
                    /* LoopSeq 2 */
                    for (unsigned char i_4 = 1; i_4 < 16; i_4 += 1) 
                    {
                        var_13 = 12185412276915729049ULL;
                        var_14 = ((/* implicit */int) ((((((/* implicit */int) arr_13 [i_4] [(_Bool)1] [i_0] [i_0])) <= (((/* implicit */int) (unsigned char)42)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (min(((((_Bool)0) ? (((/* implicit */unsigned long long int) arr_5 [i_0] [i_2] [i_0])) : (2931027422676202408ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -3390509856877149644LL)) && (((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])))))))));
                        var_15 = ((/* implicit */unsigned short) min((((/* implicit */signed char) min((((((/* implicit */int) (short)18012)) == (((/* implicit */int) var_3)))), ((!(arr_12 [i_0] [i_1] [i_2] [i_4])))))), (var_7)));
                        var_16 = ((/* implicit */unsigned char) arr_6 [2LL] [i_1] [i_1] [i_1]);
                        var_17 &= ((/* implicit */unsigned short) 896611731);
                    }
                    for (signed char i_5 = 4; i_5 < 17; i_5 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_6 = 0; i_6 < 18; i_6 += 3) 
                        {
                            arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) max(((unsigned char)61), (arr_15 [i_2] [i_5 - 2] [i_5 - 2] [i_5 - 2])))) < ((~(((/* implicit */int) arr_9 [i_5] [i_5 - 3] [i_0] [i_5]))))));
                            var_18 = ((/* implicit */long long int) (((((_Bool)1) ? (((/* implicit */int) (unsigned short)2047)) : (((/* implicit */int) (short)-18012)))) | (((/* implicit */int) var_7))));
                        }
                        var_19 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)18010)) ? (((/* implicit */int) (unsigned char)185)) : (((/* implicit */int) (unsigned char)75))));
                        arr_19 [i_0] [i_1] [i_2] = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)74)) % (((/* implicit */int) (short)-32765))))) ? (((/* implicit */int) var_2)) : (((((/* implicit */_Bool) 908737903)) ? (((/* implicit */int) (unsigned char)182)) : (((/* implicit */int) (unsigned char)156)))))));
                    }
                    arr_20 [i_0] [i_1] [i_0] = max((arr_8 [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned char)156)) ? (((/* implicit */int) arr_3 [(unsigned short)5])) : (((/* implicit */int) (unsigned char)40)))) > ((-(((/* implicit */int) (_Bool)1))))))));
                    var_20 = ((/* implicit */unsigned long long int) ((unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned char)241)) : (((/* implicit */int) (_Bool)1))))), (((unsigned long long int) 2931027422676202408ULL)))));
                }
            } 
        } 
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_7 = 4; i_7 < 17; i_7 += 1) 
        {
            var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_21 [(signed char)16])) ? (arr_11 [i_0] [i_7 - 4] [(unsigned short)14] [i_7] [i_0] [i_0]) : (((/* implicit */int) var_2)))))));
            /* LoopNest 2 */
            for (unsigned char i_8 = 2; i_8 < 17; i_8 += 3) 
            {
                for (unsigned long long int i_9 = 0; i_9 < 18; i_9 += 4) 
                {
                    {
                        arr_30 [i_0] [i_0] [i_0] [i_0] [17U] = ((/* implicit */signed char) var_6);
                        var_22 -= ((/* implicit */unsigned char) ((int) var_3));
                    }
                } 
            } 
        }
    }
    var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(6045631995789630118ULL)))) ? (((/* implicit */int) min((var_9), (((/* implicit */unsigned short) var_3))))) : (((/* implicit */int) var_2)))))));
    var_24 = ((/* implicit */unsigned long long int) ((unsigned char) (unsigned char)153));
}
