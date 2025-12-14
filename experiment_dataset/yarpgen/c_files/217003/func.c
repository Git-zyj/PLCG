/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217003
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217003 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217003
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
    var_17 = ((/* implicit */_Bool) max(((+(var_3))), (1718308941)));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                {
                    var_18 = var_10;
                    /* LoopSeq 3 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_19 = ((/* implicit */int) min((var_19), (((((/* implicit */_Bool) (+(((/* implicit */int) var_2))))) ? (var_13) : (((/* implicit */int) ((unsigned char) arr_7 [i_0])))))));
                        arr_13 [(_Bool)1] [i_0] [i_0] = min((((((/* implicit */int) ((_Bool) arr_0 [(_Bool)1]))) * (((arr_12 [i_0] [i_1] [i_2] [i_3]) ? (var_8) : (var_7))))), (max(((+(var_9))), (((/* implicit */int) min((var_12), (var_12)))))));
                        arr_14 [i_0] [i_2] [i_0] = var_13;
                        var_20 = ((/* implicit */int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) -1524697310)) ? (-156893149) : (((/* implicit */int) (_Bool)1)))), (min((((/* implicit */int) arr_11 [i_2] [i_0] [i_2] [4LL] [i_0])), (var_6)))))) ? (arr_2 [(_Bool)1]) : (((/* implicit */long long int) -970412665))));
                    }
                    for (unsigned char i_4 = 0; i_4 < 21; i_4 += 4) 
                    {
                        arr_18 [i_4] [i_1] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) max((((arr_8 [i_0] [i_4] [i_2] [i_4]) ? (((/* implicit */int) ((_Bool) (_Bool)1))) : (((((/* implicit */_Bool) var_5)) ? (var_14) : (((/* implicit */int) (_Bool)1)))))), (var_10)));
                        arr_19 [i_4] [i_0] [i_0] [i_0] = ((((((/* implicit */int) arr_16 [i_0] [i_2])) | (((/* implicit */int) arr_16 [i_2] [(_Bool)1])))) < ((~(var_15))));
                        var_21 *= ((/* implicit */_Bool) ((((((/* implicit */_Bool) max((arr_0 [i_4]), (arr_4 [i_4] [i_1] [i_2])))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_12 [i_0] [i_1] [i_2] [i_4])))) ^ (1229761021)));
                        arr_20 [(_Bool)1] [i_4] [i_4] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_17 [i_4] [i_2] [(_Bool)1] [i_0]))));
                    }
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                    {
                        var_22 *= ((/* implicit */int) var_5);
                        /* LoopSeq 3 */
                        for (unsigned char i_6 = 3; i_6 < 20; i_6 += 3) 
                        {
                            var_23 = ((/* implicit */long long int) var_7);
                            arr_27 [(_Bool)1] [i_0] [i_2] [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) max(((~(((/* implicit */int) arr_16 [i_2] [i_1])))), (((arr_24 [i_0] [i_5] [(_Bool)1] [i_1] [i_1] [i_0] [i_0]) ? (((/* implicit */int) arr_6 [i_5 - 1] [i_0] [i_1])) : (var_0)))))) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) max((arr_25 [i_0] [i_1] [i_0] [i_5 - 1] [i_6]), (var_12)))) : (max((arr_10 [(_Bool)1] [i_1] [i_2] [i_5] [i_0]), (arr_1 [i_0]))))) : (((/* implicit */int) min((arr_17 [i_5 - 1] [i_6 + 1] [i_6 - 2] [i_6]), (arr_17 [i_5 - 1] [i_6 - 1] [i_6 - 1] [(unsigned char)6]))))));
                            arr_28 [i_0] [i_0] [i_2] [20LL] [i_6] = ((/* implicit */long long int) min((((/* implicit */int) ((unsigned char) var_13))), ((~(((/* implicit */int) (_Bool)1))))));
                            arr_29 [19] [i_0] = ((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) ((min((277076930199552LL), (((/* implicit */long long int) arr_4 [i_6 + 1] [i_5 - 1] [i_0])))) <= (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_6 - 3])))))) : (((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)141)) ? (arr_9 [i_0] [i_0] [i_0] [(unsigned char)20] [i_0] [10]) : (6144))) == (((/* implicit */int) ((var_16) < (((/* implicit */long long int) var_7))))))))));
                        }
                        /* vectorizable */
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            arr_33 [i_0] [i_1] [i_0] [i_0] [10] [i_5] = (~(((/* implicit */int) arr_12 [i_5 - 1] [i_1] [i_2] [i_5 - 1])));
                            var_24 = ((int) ((-4287648538470215078LL) != (((/* implicit */long long int) arr_10 [14LL] [i_1] [i_1] [i_1] [i_0]))));
                        }
                        for (int i_8 = 0; i_8 < 21; i_8 += 2) 
                        {
                            arr_36 [i_2] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */int) arr_22 [i_0] [i_0] [i_0] [i_0]);
                            arr_37 [i_0] [16] [i_1] [i_0] = ((((((((/* implicit */int) var_2)) < (var_3))) ? (((/* implicit */int) (_Bool)1)) : ((+(var_3))))) | (((int) (((_Bool)1) ? (var_13) : (-1229761021)))));
                            arr_38 [i_0] [7] [7] [i_0] [i_0] [7] [i_0] = max((min(((+(var_4))), (((/* implicit */int) max((arr_32 [i_0] [i_1] [i_2]), (((/* implicit */unsigned char) (_Bool)0))))))), (((int) ((((/* implicit */_Bool) arr_17 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_24 [i_0] [5] [i_5] [i_5] [i_2] [i_1] [i_0])) : (arr_30 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))));
                            var_25 = var_8;
                            var_26 *= ((/* implicit */_Bool) (~(970412665)));
                        }
                    }
                    arr_39 [i_0] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)12))) ^ (4398046478336LL)));
                }
            } 
        } 
    } 
    var_27 = ((max((var_7), (((((/* implicit */_Bool) 445039038)) ? (var_9) : (((/* implicit */int) (_Bool)1)))))) + ((~(var_13))));
}
