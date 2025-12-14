/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243157
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243157 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243157
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
    var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) var_11))));
    var_14 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned int) var_10)))))), (((max((var_11), (((/* implicit */unsigned int) var_7)))) << (((((/* implicit */int) var_6)) - (225)))))));
    var_15 = (unsigned short)47107;
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] [(unsigned short)5] = ((/* implicit */int) min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_2 [i_0]))))), (arr_1 [i_0])));
        arr_4 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_0])) ? ((~(((((/* implicit */int) var_4)) << (((((/* implicit */int) (unsigned short)47107)) - (47104))))))) : (((/* implicit */int) ((unsigned char) min((((/* implicit */short) var_4)), (var_3)))))));
        var_16 = var_9;
    }
    for (unsigned char i_1 = 0; i_1 < 21; i_1 += 4) 
    {
        arr_8 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_1])) | (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)18407))))) ? (((((/* implicit */int) arr_6 [i_1])) | (((/* implicit */int) (short)32761)))) : (((((((/* implicit */int) arr_2 [i_1])) + (2147483647))) >> (((((/* implicit */int) (short)153)) - (144))))))) : (((/* implicit */int) ((_Bool) ((((/* implicit */int) (short)32761)) + (((/* implicit */int) var_6))))))));
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 17; i_2 += 4) 
        {
            for (signed char i_3 = 0; i_3 < 21; i_3 += 1) 
            {
                {
                    var_17 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) (unsigned char)7)), (var_3))))) < ((-(var_8)))));
                    var_18 = ((/* implicit */unsigned char) (-((-(((/* implicit */int) arr_12 [i_2 + 1] [i_2 + 1]))))));
                    arr_13 [7LL] [i_2 + 1] [i_3] = (_Bool)1;
                    arr_14 [i_1] [i_1] [i_2] [10U] = ((/* implicit */short) arr_2 [i_3]);
                    /* LoopSeq 1 */
                    for (signed char i_4 = 0; i_4 < 21; i_4 += 3) 
                    {
                        arr_19 [i_1] [(short)15] [i_1] [i_4] [i_4] = min((max((max((arr_11 [i_1] [(signed char)11] [i_3] [i_4]), (((/* implicit */long long int) var_12)))), (((/* implicit */long long int) arr_10 [12ULL] [i_2] [i_2 + 3])))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((var_2) >> (((509055210248679703LL) - (509055210248679688LL)))))) ? (((/* implicit */unsigned int) max((((/* implicit */int) var_4)), (var_1)))) : (((unsigned int) (unsigned char)8))))));
                        var_19 = ((/* implicit */signed char) var_9);
                        /* LoopSeq 2 */
                        for (unsigned char i_5 = 0; i_5 < 21; i_5 += 4) 
                        {
                            arr_22 [(unsigned char)0] [i_2] [i_3] [i_4] [i_4] [i_2] [i_4] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_1 [i_1]))));
                            var_20 *= ((/* implicit */_Bool) (unsigned short)20006);
                            var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_5 [i_2 - 1])) || (((/* implicit */_Bool) arr_12 [i_2 + 4] [i_2 + 3])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_2 + 1]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_2 + 2] [i_2 - 1] [i_2 + 4] [i_3]))))))))));
                            var_22 *= ((/* implicit */unsigned char) ((((/* implicit */int) (!(((((/* implicit */_Bool) 6791759008322921090LL)) && (((/* implicit */_Bool) arr_6 [i_2]))))))) > (((((((/* implicit */int) min((((/* implicit */short) (unsigned char)7)), ((short)-1)))) + (2147483647))) << (((((((/* implicit */_Bool) 3760304824423566330LL)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_3)))) - (31916)))))));
                        }
                        /* vectorizable */
                        for (int i_6 = 1; i_6 < 20; i_6 += 3) 
                        {
                            var_23 = ((/* implicit */long long int) (unsigned short)10);
                            arr_26 [i_1] [i_2] [i_3] [i_4] [i_4] = 0ULL;
                            arr_27 [i_1] [i_2 + 4] [i_3] [i_3] [i_4] [i_2 + 4] = ((/* implicit */unsigned char) ((((/* implicit */long long int) var_11)) < (arr_21 [i_6] [i_6] [i_6] [i_6 + 1] [(_Bool)1])));
                            var_24 = ((/* implicit */signed char) ((var_9) ^ (((((/* implicit */int) arr_7 [i_1])) % (((/* implicit */int) var_6))))));
                        }
                    }
                }
            } 
        } 
    }
    for (unsigned int i_7 = 0; i_7 < 10; i_7 += 3) 
    {
        /* LoopNest 2 */
        for (long long int i_8 = 1; i_8 < 8; i_8 += 2) 
        {
            for (short i_9 = 0; i_9 < 10; i_9 += 2) 
            {
                {
                    var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */unsigned int) max((((/* implicit */int) arr_17 [i_7] [i_8 - 1] [i_8 - 1] [i_8 + 2])), ((~(var_10)))))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned short) (short)-1)), ((unsigned short)31672)))) ? (max((3689002053U), (((/* implicit */unsigned int) (unsigned short)33887)))) : (((((/* implicit */_Bool) arr_11 [i_9] [i_9] [i_9] [i_9])) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_7] [13] [i_8] [i_8 + 1] [i_7] [i_9] [i_9]))))))))))));
                    var_26 *= ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) min(((short)3373), ((short)-20919)))) ? (arr_25 [i_7] [i_7] [14U] [i_9] [i_9]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)209)) && (((/* implicit */_Bool) (unsigned char)53))))))))));
                    arr_38 [i_7] [i_8] [(_Bool)1] = ((/* implicit */signed char) 3897773185831739619ULL);
                }
            } 
        } 
        arr_39 [i_7] = ((/* implicit */_Bool) max((max((arr_37 [i_7] [i_7] [i_7] [i_7]), (arr_7 [i_7]))), ((unsigned char)192)));
    }
    for (int i_10 = 0; i_10 < 13; i_10 += 1) 
    {
        var_27 = ((/* implicit */short) (~((~(var_1)))));
        var_28 = ((/* implicit */int) max((2764026371882940153ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)245)), ((unsigned short)53473))))) : ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_10]))) : (4567142443570740912LL))))))));
    }
}
