/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53958
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53958 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53958
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 |= (min(-1, ((2476513038 | ((var_4 ? var_7 : -12090))))));
    var_18 = -6060153296884459487;
    var_19 = ((((min((((var_14 ? -12878 : 1818454257))), var_5))) <= ((((12410321363457067123 ? var_9 : 1818454257)) | var_9))));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_20 = (min(-var_4, (((6036422710252484493 || 120) ? (!-5745158900222118897) : var_1))));
        var_21 = (min(var_21, (((8191 ? -30967 : (min(var_11, 9223367638808264704)))))));
        arr_2 [i_0] |= ((((((var_10 ? (arr_1 [i_0]) : 0)) + (var_7 + var_15))) < ((((!(((0 ? 6036422710252484491 : 135)))))))));
        arr_3 [i_0] [i_0] = ((((var_0 ? 17223507369778760860 : 1101774436))) ? ((-22139 ? 23885 : (var_5 + -6442584495672691820))) : (((arr_0 [i_0]) / 7111975988005513729)));

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {

            for (int i_2 = 3; i_2 < 19;i_2 += 1) /* same iter space */
            {
                var_22 = ((min(var_16, (arr_6 [i_2 - 1] [i_1] [i_2 + 1]))) >> (-var_8 - 3495606516915956650));
                var_23 ^= ((arr_9 [i_2 - 3] [i_2 - 3] [i_2 - 2] [i_2 - 1]) / (((+((var_2 ? (arr_7 [i_1]) : (arr_7 [i_0])))))));
            }
            for (int i_3 = 3; i_3 < 19;i_3 += 1) /* same iter space */
            {
                var_24 = (max(var_24, ((((arr_0 [i_3 - 1]) == ((var_13 ? (arr_0 [i_3 - 1]) : (arr_0 [i_3 - 3]))))))));
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 17;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 19;i_5 += 1)
                    {
                        {
                            var_25 = (((min(((2211134368 ? (arr_0 [i_0]) : 123)), (arr_7 [i_0]))) + ((max(((var_13 ? var_4 : (arr_18 [i_0]))), var_2)))));
                            var_26 = ((var_1 << (((((var_0 - (arr_16 [i_1] [3])))) ? ((((!(arr_9 [12] [i_3] [i_1] [12]))))) : var_7))));
                            var_27 = 984777689;
                            var_28 = (max(var_28, (arr_6 [i_5] [18] [2])));
                        }
                    }
                }
                var_29 ^= 12410321363457067123;
            }
            var_30 = ((-(arr_5 [i_0] [i_1] [i_0])));
            var_31 *= ((((((arr_17 [i_0]) ? -7407640786770668808 : (arr_17 [i_0])))) ? (var_15 < 1053465040) : (max((arr_17 [i_0]), var_0))));
            arr_19 [i_1] [i_0] [i_0] = (((arr_9 [i_0] [i_1] [i_1] [i_1]) ? (min((arr_5 [i_0] [i_0] [i_1]), 1832153520)) : (arr_5 [i_0] [i_0] [i_0])));
        }
    }
    var_32 = 613;
    #pragma endscop
}
